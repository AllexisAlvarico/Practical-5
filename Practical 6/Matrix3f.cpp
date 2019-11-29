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
	A11 = t_row1.x;
	A12 = t_row1.y;
	A13 = t_row1.z;
	A21 = t_row2.x;
	A22 = t_row2.y;
	A23 = t_row2.z;
	A31 = t_row3.x;
	A32 = t_row3.y;
	A33 = t_row3.z;
}

Matrix3f::~Matrix3f()
{
}
