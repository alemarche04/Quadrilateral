/// \file CRhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include <cmath>
#include "CRhombus.h" 

#define PI 3.14159265

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param d1 diagonal1 of the Rhombus
/// @param d2 diagonal2 of the Rhombus
Rhombus::Rhombus(float d1, float d2) {

	Init();

	cout << "Rhombus - constructor" << endl;

	if (d1 <= 0. || d2 <= 0.) {
		WarningMessage("Rhombus - constructor: width and height should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(d1, d2);

}

/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;
	Reset();

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus &r) { 

	cout << "Rhombus - operator =" << endl;
	
	
	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rhombus::operator==(const Rhombus &r) { 

	if (r.diagonal1 == diagonal1 && r.diagonal2 == diagonal2)
		return true;
		
	return false;
}


/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus &r) { 

	cout << "Rhombus - copy constructor" << endl;

	Init(r);
	
}


/// @brief default initialization of the object
void Rhombus::Init() {
	SetDim(1,1);

}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus &r) {
	
	Init();
	SetDim(r.diagonal1,r.diagonal2);
}

/// @brief total reset of the object  
void Rhombus::Reset() {

	SetDim(1,1);

}


/// @brief set diagonal1 of the object
/// @param d1 diagonal1 
void Rhombus::SetDiagonal1(float d1) {

	if (d1 < 0.) {
		WarningMessage("Rhombus - SetDiagonal1: diagonal1 should be > 0");
		return;
	}

	SetDim(d1,diagonal2);

}

/// @brief set diagonal2 of the object
/// @param d2 diagonal2 
void Rhombus::SetDiagonal2(float d2) {

	if (d2 < 0.) {
		WarningMessage("Rhombus - SetDiagonal2: diagonal2 should be > 0");
		return;
	}

	SetDim(diagonal1, d2);

}



/// @brief get diagonal1 of the object
/// @return diagonal1 
float Rhombus::GetDiagonal1() {

	return diagonal1;

}

/// @brief get diagonal2 of the object
/// @return diagonal2
float Rhombus::GetDiagonal2() {

	return diagonal2;
}

/// @brief set diagonal1 and diagonal2 of the object
/// @param s1 diagonal1
/// @param d2 diagonal2
void Rhombus::SetDim(float d1, float d2) {

	diagonal1 = d1;
	diagonal2 = d2;  
	if (d1 < 0. || d2 < 0.) {
		WarningMessage("Rhombus - SetDim: diagonal1 and diagonal2 should be > 0");
		return;
	}

	float l = sqrt(pow(diagonal1,2)+pow(diagonal2,2));
	sides[0]= sides[1]= sides[2]= sides[3] = l;

	angles[0] = angles[2]= 2*(float)(round(atan(diagonal1/diagonal2)*180/PI));
	angles[1] = angles[3]= 180-angles[0];
	if(2*(angles[0] + angles[1]) != 360.)
		WarningMessage("Rhombus - SetDim: sum of internal angles is != 360");
	return;
}

/// @brief get diagonal1 and diagonal2 of the object
/// @param d1 diagonal1 
/// @param d2 diagonal2
void Rhombus::GetDim(float &d1, float &d2) {

	d1 = diagonal1;
	d2 = diagonal2; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float Rhombus::GetArea() {
	
	return ((diagonal1*diagonal2)/2);
}

/// @brief computes the perimeter of the object
/// @return the area 
float Rhombus::GetPerimeter() {
	
	return (2*sqrt(pow(diagonal1,2)+pow(diagonal2,2)));
}

/// @brief computes the side of the object
/// @return the area 
float Rhombus::GetSide() {
	
	return (sqrt(pow(diagonal1,2)+pow(diagonal2,2)));
}


/// @brief for debugging: all about the object
void Rhombus::Dump() {
	cout << endl;
	cout << "---Rhombus---" << endl; 
	cout << endl;
	
	cout << "Diagonal1 = " << diagonal1 << endl;
	cout << "Diagonal2 = " << diagonal2 << endl; 

	cout << "Area = " << GetArea() << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Side = " << GetSide() << endl;

	cout << "Angles = " << angles[0] << " " << angles[1] << " " << angles[2] << " " << angles[3] << endl;
	cout << "Sides = " << sides[0] << " " << sides[1] << " " << sides[2] << " " << sides[3] << endl;

	cout << endl;
}