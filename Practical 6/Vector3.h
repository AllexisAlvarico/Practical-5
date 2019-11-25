#include <iostream>
#include <SFML/Graphics.hpp>


class Vector3
{
public:
	Vector3();
	~Vector3();
	

	Vector3(double t_x, double t_y, double t_z);
	Vector3(Vector3& V);
	std::string toString();


	Vector3 operator +(const Vector3 t_right) const;
	Vector3 operator -(const Vector3 t_right) const;
	Vector3 operator *(const double t_scalar) const;
	Vector3 operator /(const double t_divisor) const;
	Vector3 operator +=(const Vector3 t_right);
	Vector3 operator -=(const Vector3 t_right);


	double length()const;
	double lengthSquared()const;
	void normalise(); // vector changes and will have length 1 


private:

	double m_x;
	double m_y;
	double m_z;

};
