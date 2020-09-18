#include "Property.h"
#pragma once

class Parcel : public Property
{
private:
	bool isThereWater;
	bool isThereElectricity;
	bool isItCloseToARoad;
public:
	Parcel();
	Parcel(bool isThereWater, bool isThereElectricity, bool isItCloseToARoad, const char* anAdress, const char* anOwner, double aPrice, int anArea);
	Parcel(Parcel& p);
	~Parcel();
	Parcel& operator = (const Parcel& p);
	char* GetAddress();
	double GetPrice();
	void PropertyPrint();
};

