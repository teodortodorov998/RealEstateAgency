#include "Property.h"
#pragma once

class House : public Property
{
private:
	int numberOfRooms;
	int numberOfFloors;
	int yardArea;
public:
	House();
	House(const int numberOfRooms, const int numberOfFloors, const int yardArea, const char* anAddress, const char* anOwner, double aPrice, int anArea);
	House(House& h);
	~House();
	House& operator = (const House& h);
	char* GetAddress();
	double GetPrice();
	void PropertyPrint();
};

