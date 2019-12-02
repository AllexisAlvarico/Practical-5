#include "Vector2f.h"


Vector2f::Vector2f() :
	m_x{ 0.0 },
	m_y{ 0.0 }
{
}

Vector2f::Vector2f(double t_x, double t_y)
{
	m_x = t_x;
	m_y = t_y;
}

std::string Vector2f::toString()
{
	return ("X: " + std::to_string(m_y) + ",Y: " + std::to_string(m_y));
}

Vector2f Vector2f::operator+(const Vector2f t_right) const
{
	return { t_right.m_x + m_x, t_right.m_y + m_y };
}

Vector2f Vector2f::operator-(const Vector2f t_right) const
{
	return { t_right.m_x - m_x, t_right.m_y - m_y };
}

Vector2f Vector2f::operator-(Vector2f V)
{
	Vector2f V1;
	V1.m_x = -V.m_x;
	V1.m_y = -V.m_y;
	return V1;
}

double Vector2f::operator*(Vector2f V) const
{
	return (m_x * V.m_x + m_y * V.m_y);
}

Vector2f Vector2f::operator*(const double k) const
{
	return  { k * m_x, k * m_y};
}

Vector2f Vector2f::operator*(const float k) const
{
	return { k * m_x, k * m_y };
}

Vector2f Vector2f::operator*(const int k) const
{
	return { k * m_x, k * m_y };
}

Vector2f Vector2f::operator/(const double t_divisor) const
{
	return { m_x / t_divisor ,  m_y / t_divisor};
}

double Vector2f::length() const
{
	return sqrt(m_x * m_x + m_y * m_y);
}

double Vector2f::lengthSquared() const
{
	return (m_x * m_x + m_y * m_y);
}

void Vector2f::normalise()
{
	Vector2f m_newVector = {}; // vector's assignments
	if (length() > 0.0)
	{
		m_x = m_x / m_newVector.length(); // gets the x-value
		m_y = m_y / m_newVector.length(); // gets the y-value
	}

}
