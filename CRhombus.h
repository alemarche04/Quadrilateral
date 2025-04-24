/*! \file CRhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "CQuadrilateral.h"


/// @class Rhombus
/// @brief to manage an object with the shape of a Rhombus
class Rhombus : public Quadrilateral
{
protected:
	float diagonal1;
	float diagonal2;
	

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float w, float l);
	Rhombus(const Rhombus &r);
	
	~Rhombus();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);
	/// @}
	
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rhombus &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetDiagonal1(float d1);
	void SetDiagonal2(float d2);
	void SetDim(float d1, float d2); 
		
	void GetDim(float &d1, float &d2);
	float GetDiagonal1();
	float GetDiagonal2(); 

	float GetPerimeter(); 
	float GetArea();
	float GetSide();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void Dump();
	/// @}
		
};

#endif