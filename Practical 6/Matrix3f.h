#include <iostream>
#include <SFML/Graphics.hpp>
#include "Vector3f.h"



class Matrix3f
{

public:
	Matrix3f();
	Matrix3f(Vector3f Row1, Vector3f Row2, Vector3f Row3);
	Matrix3f(
		double t_a11, double t_a12, double t_a13,
		double t_a21, double t_a22, double t_a23,
		double t_a31, double t_a32, double t_a33);
	Matrix3f(const Vector3f t_row1, const Vector3f t_row2, const Vector3f t_row3);


	std::string toString()const;

	Matrix3f operator +(const Matrix3f t_other) const;
	Matrix3f operator -(const Matrix3f t_other) const;
	Matrix3f operator -(const Matrix3f t_matrix3f);
	Matrix3f operator *(const double x) const;
	Matrix3f operator *(const Matrix3f t_other)const;
	Matrix3f operator *(const double t_scale)const;

	Matrix3f transpose()const;
	double determinant() const;
	Matrix3f inverse() const;

	Vector3f row(const int t_row) const; // 0 is first row then 1,2
	Vector3f column(const int t_column) const; // m11, m21, m31

	static Matrix3f rotationZ(const double t_angleRadians); // counterclockwise
	static Matrix3f rotationY(const double t_angleRadians);
	static Matrix3f rotationX(const double t_angleRadians);// {1,-3,2} = MyMatrix3::rotationX(PI/2)*{1,2,3}

	static Matrix3f translation(const Vector3f t_displacement); // 2d translation make sure z=1
	static Matrix3f scale(const double t_scalingfactor);
	static Matrix3f scale3D(int dx);

private:
	sf::Vector3f newVector = {}; // vector's assignments
	double A11;
	double A12;
	double A13;
	double A21;
	double A22;
	double A23;
	double A31;
	double A32;
	double A33;

};

