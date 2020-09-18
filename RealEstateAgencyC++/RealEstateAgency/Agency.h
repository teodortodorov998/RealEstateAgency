#include "Apartment.h"
#include "House.h"
#include "Parcel.h"
#pragma once

class Agency
{
private:
	static int apartmentCount;
	static int houseCount;
	static int parcelCount;
	static int propertyCount;
	static char agencyName[20];
	Apartment* apartments = new Apartment[5];
	House* houses = new House[5];
	Parcel* parcels = new Parcel[5];
public:
	Agency();
	~Agency();
	int AddApartment(Apartment& a);
	int AddHouse(House& h); 
	int AddParcel(Parcel& p);
	int RemoveApartment(const char* anAddress);
	int RemoveHouse(const char* anAddress);
	int RemoveParcel(const char* anAddress);
	int RemoveProperty(const char* anAddress);
	void FindByPrice(double aPrice);
	void  PrintProperties(const char* typeOfProperty);


	
};

