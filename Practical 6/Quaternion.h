#pragma once
#include <iostream>
#include "Vector3f.h"

#define PI 3.14159265358979323846
class Quaternion
{
public:
	Quaternion();
	Quaternion(double t_w, double t_x, double t_y, double t_z);
	Quaternion(double t_w, Vector3f t_v);
	std::string ToString();

	double Modulus();
	Quaternion Normalise();
	Quaternion Conjugate();
	void FromAxisAngle(Vector3f t_axis, double t_angleRadian);
	Quaternion Multiply(Quaternion t_q);
	Quaternion Copy();
	Vector3f Rotate(Vector3f t_pt, int t_angle);

	Quaternion operator +(Quaternion q1) const;
	Quaternion operator -() const;
	Quaternion operator -(Quaternion q1) const;
	Quaternion operator *(Quaternion q1) const;


private:
	double m_x;
	double m_y;
	double m_z;
	double m_w;
};

