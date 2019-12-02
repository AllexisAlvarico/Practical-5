#pragma once
#include <SFML/Graphics.hpp>

class Vector2f
{
public:
	Vector2f();

	double m_x;
	double m_y;

	Vector2f(double t_x, double t_y);
	std::string toString();


	Vector2f operator +(const Vector2f t_right) const;
	Vector2f operator -(const Vector2f t_right) const;
	Vector2f operator -(Vector2f V);
	double operator *(Vector2f V) const;
	Vector2f operator *(const double k) const;
	Vector2f operator *(const float k) const;
	Vector2f operator *(const int k) const;
	Vector2f operator /(const double t_divisor) const;
	double length()const;
	double lengthSquared()const;
	void normalise(); // vector changes and will have length 1 
};

