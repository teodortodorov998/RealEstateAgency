#include "Property.h"
#pragma once

class Apartment : public Property
{
private:
	int numberOfRooms;
	int floor;
public:
	Apartment();
	Apartment(int numberOfRooms, int floor, const char* anAddress, const char* anOwner, double aPrice, int anArea);
	Apartment(Apartment& a);
	~Apartment();
	Apartment& operator = (const Apartment& a);
	char* GetAddress();
	double GetPrice();
	void PropertyPrint();
};

