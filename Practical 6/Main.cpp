

#include <iostream>
#include "Matrix3f.h"
#include "Vector3f.h"

int main()
{
	Vector3f m_vector1{};
	Vector3f m_vector2{};
	Matrix3f m_matrix1{};
	Matrix3f m_matrix2{};

	m_vector1 = { 8.0,2.0,3.0 };
	std::cout << m_vector1.toString();
	m_vector1 = m_vector1 * 5.0;
	std::cout << "Mulitply: " << m_vector1.toString() << "\n";

	std::cout << "---------------------------------------------------\n";

	// operator *
	m_vector1 = { 2.0,3.0,7.0 };
	m_vector2 = { 2.0,1.0,3.0 };
	std::cout << m_vector1.toString();
	double m_answer = m_vector1 * m_vector2;
	std::cout << "Mulitply vector: " << std::to_string(m_answer) << "\n";

	std::cout << "---------------------------------------------------\n";

	m_vector1 = { 6.0,5.0,6.0 };
	std::cout << m_vector1.toString();
	m_vector1 = m_vector1 / 5;
	std::cout << "Divisor vector: " << std::to_string(m_answer) << "\n";


	m_vector1 = { 8.0,2.0,3.0 };
	m_vector2 = { 2.0,1.0,3.0 };
	std::cout << m_vector1.toString();
	m_vector1 = m_vector1 ^ m_vector2;
	std::cout << "operator ^: " << m_vector1.toString() << "\n";

	m_vector1 = { 3.0,2.0,1.0 };
	std::cout << m_vector1.toString();
	m_vector1.length();
	std::cout << "Lenght: " << std::to_string(m_vector1.length()) << "\n";

	std::cout << "---------------------------------------------------\n";

	m_vector1 = { 2,4,3 };
	std::cout << m_vector1.toString();
	std::cout << "LenghtSquared: " << std::to_string(m_vector1.lengthSquared()) << "\n";

	std::cout << "---------------------------------------------------\n";

	m_vector1 = { 6,4,8 };
	std::cout << m_vector1.toString();
	m_vector1.normalise();
	std::cout << "Normalise: " << m_vector1.toString();

	std::cout << "---------------------------------------------------\n";

	m_matrix1 = { 1,2,3,4,5,6,7,8,9 }; // matrix first value
	m_matrix2 = { 1,2,3,4,5,6,7,8,9 }; // matrix second value

	m_matrix1 = m_matrix1 + m_matrix2; // calulation

	std::cout << "|	     Operators +	  |" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	 Expected Answer	 ]|" << std::endl; // display
	std::cout << "|Row 1[2.0     ,4.0     ,6.0     ]|" << std::endl; // display
	std::cout << "|Row 2[8.0     ,10.0     ,12.0   ]|" << std::endl; // display
	std::cout << "|Row 3[14.0     ,16.0     ,18.0  ]|" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	     Answer		 ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|---------------------------------|" << std::endl; // display


	m_matrix1 = { 6,5,7,9,3,4,5,4,2 }; // matrix first value
	m_matrix2 = { 4,5,6,8,4,2,3,4,5 }; // matrix second value

	m_matrix1 = m_matrix1 - m_matrix2; // calulation

	std::cout << "|	     Operators -	  |" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	 Expected Answer	 ]|" << std::endl; // display
	std::cout << "|Row 1[2.0     ,0.0     ,1.0     ]|" << std::endl; // display
	std::cout << "|Row 2[1.0     ,-1.0     ,2.0    ]|" << std::endl; // display
	std::cout << "|Row 3[2.0     ,0.0     ,-3.0    ]|" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	     Answer		 ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|---------------------------------|__" << std::endl; // display

	m_matrix1 = { 6,5,7,9,3,4,5,4,2 };  // matrix's first value

	m_matrix1 = m_matrix1 * 2; // calulation

	std::cout << "|	      Operators *	     |" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	  Expected Answer	    ]|" << std::endl; // display
	std::cout << "|Row 1[12.0     ,10.0     ,14.0     ]|" << std::endl; // display
	std::cout << "|Row 2[18.0     ,6.0     ,8.0     ]|" << std::endl; // display
	std::cout << "|Row 3[10.0     ,8.0     ,4.0     ]|" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	      Answer		    ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display


	m_matrix1 = { 6,5,7,9,3,4,5,4,2 }; // matrix first value
	m_matrix2 = { 4,5,6,8,4,2,3,4,5 }; // matrix second value

	m_matrix1 = m_matrix1 * m_matrix2; // calulation

	std::cout << "|	     Operators *	  |" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	 Expected Answer	 ]|" << std::endl; // display
	std::cout << "|Row 1[85.0     ,78.0     ,81.0     ]|" << std::endl; // display
	std::cout << "|Row 2[72.0     ,73.0     ,80.0    ]|" << std::endl; // display
	std::cout << "|Row 3[58.0     ,49.0     ,48.0    ]|" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	     Answer		 ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|---------------------------------|" << std::endl; // display


	m_matrix1 = { 2,3,4,1,4,3,6,2,5 }; // matrix first value
	m_vector1 = { 2,1,3 };

	m_vector1 = m_matrix1 * m_vector1; // calulation

	std::cout << "|	     Operators *	  |" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	 Expected Answer	 ]|" << std::endl; // display
	std::cout << "|Row 1[19.0     ,15.0     ,29.0     ]|" << std::endl; // display
	std::cout << "|---------------------------------|" << std::endl; // display
	std::cout << "|[	     Answer		 ]|" << std::endl; // display
	std::cout <<  m_vector1.toString() << std::endl; // displays the answer
	std::cout << "|---------------------------------|" << std::endl; // display

	m_matrix1 = { 5,2,3,6,8,7,9,2,3 }; // matrix's value
	m_matrix1 = m_matrix1.transpose(); // calls the transpose function

	std::cout << "|	      Transpose              |" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	  Expected Answer	    ]|" << std::endl; // display
	std::cout << "|Row 1[5.0     ,6.0     ,9.0        ]|" << std::endl; // display
	std::cout << "|Row 2[2.0     ,8.0     ,2.0        ]|" << std::endl; // display
	std::cout << "|Row 3[3.0     ,7.0     ,3.0        ]|" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	      Answer		    ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	double determinantAns = m_matrix1.determinant(); // calls the determinant fuunction

	std::cout << "|	      Determinant            |" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	  Expected Answer	    ]|" << std::endl; // display
	std::cout << "|[		-40.0  	            ]|" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	      Answer		    ]|" << std::endl; // display
	std::cout << "|[    " + std::to_string(determinantAns) + "		    ]|\n";// displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = { 0,0,1,2,-1,3,1,1,4 }; // matrix's value
	m_matrix1 = m_matrix1.inverse(m_matrix1); // calls the inverse function
	std::cout << "|	      Inverse                |" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	  Expected Answer	    ]|" << std::endl; // display
	std::cout << "|Row 1[-2.3     ,0.3     ,0.3       ]|" << std::endl; // display
	std::cout << "|Row 2[-1.6     ,-0.3     ,0.6      ]|" << std::endl; // display
	std::cout << "|Row 3[1.0     ,0.0     ,0.0        ]|" << std::endl; // display
	std::cout << "|------------------------------------|" << std::endl; // display
	std::cout << "|[	      Answer		    ]|" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display
	
	// rotation z

	m_matrix1 = { 5,3,9,7,5,2,6,4,9 }; // the matrix3's value
	m_matrix1 = m_matrix1.rotationX(90); // calls the rotation z function and multiply it by a vector to get the rotation
	std::cout << "|	      Rotation X            |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = m_matrix1.rotationY(90); // calls the rotation z function and multiply it by a vector to get the rotation
	std::cout << "|	      Rotation Y           |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = m_matrix1.rotationZ(90); // calls the rotation z function and multiply it by a vector to get the rotation
	std::cout << "|	      Rotation Z           |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = { 4,4,4,4,2,5,2,5,-3 };
	m_matrix1 = m_matrix1.translation(5,6); // calls the translation functions and pass a vector
	std::cout << "|	      Translate              |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = m_matrix1.scale(5, 6); // calls the translation functions and pass a vector
	std::cout << "|	      Scale              |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display

	m_matrix1 = m_matrix1.scale3D(5); // calls the translation functions and pass a vector
	std::cout << "|	      Scale3D              |" << std::endl; // display
	std::cout << m_matrix1.toString() << std::endl; // displays the answer
	std::cout << "|------------------------------------|" << std::endl; // display


	system("PAUSE");
	return 0;
}