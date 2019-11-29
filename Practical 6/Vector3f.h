#include <iostream>
#include <SFML/Graphics.hpp>


class Vector3f
{
public:
	Vector3f();
	~Vector3f();
	

	Vector3f(double t_x, double t_y, double t_z);
	Vector3f(Vector3f& V);
	std::string toString();


	Vector3f operator +(const Vector3f t_right) const;
	Vector3f operator -(const Vector3f t_right) const;
	Vector3f operator *(const double t_scalar) const;
	Vector3f operator /(const double t_divisor) const;
	Vector3f operator +=(const Vector3f t_right);
	Vector3f operator -=(const Vector3f t_right);


	double length()const;
	double lengthSquared()const;
	void normalise(); // vector changes and will have length 1 


private:

	double m_x;
	double m_y;
	double m_z;

};
