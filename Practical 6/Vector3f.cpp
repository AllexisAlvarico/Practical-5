#include "Vector3f.h"




Vector3f::Vector3f() :
	m_x {0.0},
	m_y {0.0},
	m_z {0.0}
{
}

Vector3f::~Vector3f()
{
}

Vector3f::Vector3f(double t_x, double t_y, double t_z)
{
	m_x = t_x;
	m_y = t_y;
	m_z = t_z;
}

//Vector3f::Vector3f(Vector3f& V)
//{
//	m_x = V.x;
//	m_y = t_y;
//	m_z = t_z;
//}

std::string Vector3f::toString()
{
	return std::string();
}
