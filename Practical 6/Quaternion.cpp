#include "Quaternion.h"

Quaternion::Quaternion() :
	m_x{0.0},
	m_y{0.0},
	m_z{0.0},
	m_w{0.0}

{
}

Quaternion::Quaternion(double t_w, double t_x, double t_y, double t_z)
{
	m_x = t_x;
	m_y = t_y;
	m_z = t_z;
	m_w = t_w;
}

Quaternion::Quaternion(double t_w, Vector3f t_v)
{
	m_w = t_w;
	m_x = t_v.m_x;
	m_y = t_v.m_y;
	m_z = t_v.m_z;
}

std::string Quaternion::ToString()
{
	return "W: " + std::to_string(m_w) + ",X: " + std::to_string(m_x) + ",I:" + std::to_string(m_y) + ",j:" + std::to_string(m_z) + "k)";
}

double Quaternion::Modulus()
{
	return sqrtf(m_w * m_w + m_x * m_x + m_y * m_y + m_z * m_z);
}

Quaternion Quaternion::Normalise()
{
	double m = m_w * m_w + m_x * m_x + m_y * m_y + m_z * m_z;
	if (m > 0.001)
	{
		m = sqrt(m);
		return Quaternion(m_w / m, m_x / m, m_y / m, m_z / m);
	}
	else
	{
		return Quaternion(1, 0, 0, 0);
	}
}

Quaternion Quaternion::Conjugate()
{
	return Quaternion(-m_w, -m_x, -m_y, -m_z);
}

void Quaternion::FromAxisAngle(Vector3f t_axis, double t_angleRadian)
{
	double m = t_axis.length();
	if (m > 0.0001)
	{
		double ca = cos(t_angleRadian / 2);
		double sa = sin(t_angleRadian / 2);
		m_x = t_axis.m_x / m * sa;
		m_y = t_axis.m_y / m * sa;
		m_z = t_axis.m_z / m * sa;
		m_w = ca;
	}
	else
	{
		m_w = 1; m_x = 0; m_y = 0; m_z = 0;
	}
}

Quaternion Quaternion::Multiply(Quaternion t_q)
{
	double nw = t_q.m_w * m_w - t_q.m_x * m_x - t_q.m_y * m_y - t_q.m_z * m_z;
	double nx = t_q.m_w * m_x + t_q.m_x * m_w + t_q.m_y * m_z - t_q.m_z * m_y;
	double ny = t_q.m_w * m_y + t_q.m_y * m_w + t_q.m_z * m_x - t_q.m_x * m_z;
	double nz = t_q.m_w * m_z + t_q.m_z * m_w + t_q.m_x * m_y - t_q.m_y * m_x;
	return Quaternion(nw, nx, ny, nz);
}

Quaternion Quaternion::Copy()
{
	return  Quaternion(m_x, m_y, m_z, m_w);
}



Vector3f Quaternion::Rotate(Vector3f t_pt, int t_angle)
{
	Quaternion axis, rotate;
	axis = Normalise();
	double angleRad = PI / 180 * t_angle;
	rotate = Quaternion(cos(angleRad / 2), sin(angleRad / 2) * axis.m_x, sin(angleRad / 2) * axis.m_y, sin(angleRad / 2) * axis.m_z);
	Quaternion conjugate = rotate.Conjugate();
	Quaternion qNode = Quaternion(0, t_pt.m_x, t_pt.m_y, t_pt.m_z);
	qNode = rotate * qNode * conjugate;
	return Vector3f(qNode.m_x, qNode.m_y, qNode.m_z);
}

Quaternion Quaternion::operator+(Quaternion q1) const
{
	return Quaternion(m_w + q1.m_w, m_x + q1.m_x, m_y + q1.m_y, m_z + q1.m_z);
}

Quaternion Quaternion::operator-() const
{
	return Quaternion(-m_w, -m_x, -m_y, -m_z);
}

Quaternion Quaternion::operator-(Quaternion q1) const
{
	return Quaternion(m_w - q1.m_w, m_x - q1.m_x, m_y - q1.m_y, m_z - q1.m_z);
}
Quaternion Quaternion::operator*(Quaternion q1) const
{
	double nw = m_w * q1.m_w - m_x * q1.m_x - m_y * q1.m_y - m_z * q1.m_z;
	double nx = m_w * q1.m_x + m_x * q1.m_w + m_y * q1.m_z - m_z * q1.m_y;
	double ny = m_w * q1.m_y + m_y * q1.m_w + m_z * q1.m_x - m_x * q1.m_z;
	double nz = m_w * q1.m_z + m_z * q1.m_w + m_x * q1.m_y - m_y * q1.m_x;
	return Quaternion(nw, nx, ny, nz);
}

