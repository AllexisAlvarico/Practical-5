#include "Matrix3f.h"

Matrix3f::Matrix3f()
{
	A11 = 0.0f;
	A12 = 0.0f;
	A13 = 0.0f;
	A21 = 0.0f;
	A22 = 0.0f;
	A23 = 0.0f;
	A31 = 0.0f;
	A32 = 0.0f;
	A33 = 0.0f;
}

Matrix3f::Matrix3f(double t_a11, double t_a12, double t_a13, double t_a21, double t_a22, double t_a23, double t_a31, double t_a32, double t_a33)
{
	A11 = t_a11;
	A12 = t_a12;
	A13 = t_a13;
	A21 = t_a21;
	A22 = t_a22;
	A23 = t_a23;
	A31 = t_a31;
	A32 = t_a32;
	A33 = t_a33;
}

Matrix3f::Matrix3f(const Vector3f t_row1, const Vector3f t_row2, const Vector3f t_row3)
{
	A11 = t_row1.m_x;
	A12 = t_row1.m_y;
	A13 = t_row1.m_z;
	A21 = t_row2.m_x;
	A22 = t_row2.m_y;
	A23 = t_row2.m_z;
	A31 = t_row3.m_x;
	A32 = t_row3.m_y;
	A33 = t_row3.m_z;
}

std::string Matrix3f::toString() const
{
	return std::string();
}

Matrix3f Matrix3f::operator+(const Matrix3f t_other) const
{
	return { A11 + t_other.A11, A12 + t_other.A12, A13 + t_other.A13,
				A21 + t_other.A21, A22 + t_other.A22, A23 + t_other.A23,
				A31 + t_other.A31, A32 + t_other.A32, A33 + t_other.A33 };
}

Matrix3f Matrix3f::operator-(const Matrix3f t_other) const
{
	return { A11 - t_other.A11, A12 - t_other.A12, A13 - t_other.A13,
				A21 - t_other.A21, A22 - t_other.A22, A23 - t_other.A23,
				A31 - t_other.A31, A32 - t_other.A32, A33 - t_other.A33 };
}

Matrix3f Matrix3f::operator-(const Matrix3f t_matrix3f)
{
	return -1 * t_matrix3f;
}

Matrix3f Matrix3f::operator*(const double x) const
{
	Matrix3f m_answer;
	m_answer.A11 = A11 * x;
	m_answer.A12 = A12 * x;
	m_answer.A13 = A13 * x;

	m_answer.A21 = A21 * x;
	m_answer.A22 = A22 * x;
	m_answer.A23 = A23 * x;

	m_answer.A31 = A31 * x;
	m_answer.A32 = A32 * x;
	m_answer.A33 = A33 * x;
	return m_answer;
}

Matrix3f Matrix3f::transpose() const
{
	return{A11, A21, A31,
		A12, A22, A32,
		A13, A23, A33};
}

double Matrix3f::determinant() const
{
	return (A11 * A22 * A33 - A11 * A32 * A23 + A21 * A32 *
		A13 - A31 * A22 * A13 + A31* A12 * A23- A21 * A12 * A33);
}

Matrix3f Matrix3f::inverse() const
{
	return Matrix3f();
}

Matrix3f Matrix3f::operator*(const Matrix3f t_other) const
{
	Matrix3f m_answer;
	m_answer.A11 = row(0) * t_other.column(0);
	m_answer.A12 = row(0) * t_other.column(1);
	m_answer.A13 = row(0) * t_other.column(2);

	m_answer.A21 = row(1) * t_other.column(0);
	m_answer.A22 = row(1) * t_other.column(1);
	m_answer.A23 = row(1) * t_other.column(2);

	m_answer.A31 = row(2) * t_other.column(0);
	m_answer.A32 = row(2) * t_other.column(1);
	m_answer.A33 = row(2) * t_other.column(2);
}

Vector3f Matrix3f::row(const int t_row) const
{
	switch (t_row) // if 0
	{
	case 0:
		return { A11, A12, A13 }; // return the 1st row
	case 1:
		return { A21, A22, A23 }; // return the 2nd row
	case 2:
	default:
		return { A31, A32, A33 }; // return the 3rd row
	}
}

Vector3f Matrix3f::column(const int t_column) const
{
	switch (t_column) // if 0
	{
	case 0:
		return { A11, A21, A31 };
	case 1:
		return { A12, A22, A32 };
	case 2:
	default:
		return { A13, A23, A33 };
	}
}

Matrix3f Matrix3f::rotationZ(const double t_angleRadians)
{
	return Matrix3f();
}

Matrix3f Matrix3f::rotationY(const double t_angleRadians)
{
	return Matrix3f();
}

Matrix3f Matrix3f::rotationX(const double t_angleRadians)
{
	return Matrix3f();
}

Matrix3f Matrix3f::translation(const Vector3f t_displacement)
{
	return Matrix3f();
}

Matrix3f Matrix3f::scale(const double t_scalingfactor)
{
	return Matrix3f();
}

Matrix3f Matrix3f::scale3D(int dx)
{
	return Matrix3f();
}



Matrix3f Matrix3f::operator*(const double t_scale) const
{
	return Matrix3f();
}




