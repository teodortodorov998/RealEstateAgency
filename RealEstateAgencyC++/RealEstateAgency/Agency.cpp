#include "Agency.h"
#include <iostream>
#include <string>

using namespace std;


int Agency::apartmentCount = 0;
int Agency::houseCount = 0;
int Agency::parcelCount = 0;



Agency::Agency() {
	for (size_t i = 0; i < 5; i++)
	{
		apartments[i] = Apartment();
		houses[i] = House();
		parcels[i] = Parcel();
	}
	
	
}
Agency::~Agency() {
	delete[] apartments;
	delete[] houses;
	delete[] parcels;
}

int Agency::AddApartment(Apartment& a) {
	apartments[apartmentCount++] = a;
	return 1;
}
int Agency::AddHouse(House& h) {
	houses[houseCount++] = h;
	return 1;
}

int Agency::AddParcel(Parcel& p) {
	parcels[parcelCount++] = p;
	return 1;
}


int Agency::RemoveProperty(const char* anAddress) {
	for (size_t i = 0; i < 5; i++)
	{
		if (strcmp(apartments[i].GetAddress(), anAddress) == 0)
		{
			apartments[i] = Apartment();
			return 1;
		}

		if (strcmp(houses[i].GetAddress(), anAddress) == 0)
		{
			houses[i] = House();
			return 1;
		}

		if (strcmp(parcels[i].GetAddress(), anAddress) == 0)
		{
			parcels[i] = Parcel();
			return 1;
		}
	}
	return 0;

}

void Agency::FindByPrice(double aPrice) {
	for (size_t i = 0; i < 5; i++)
	{
		if (apartments[i].GetPrice() == aPrice)
		{
			cout << "The property with a price of " << aPrice << " is: " << endl;
			apartments[i].PropertyPrint();
		}

		if (houses[i].GetPrice() == aPrice)
		{
			cout << "The property with a price of " << aPrice << " is: " << endl;
			houses[i].PropertyPrint();
		}

		if (parcels[i].GetPrice() == aPrice)
		{
			cout << "The property with a price of " << aPrice << " is: " << endl;
			parcels[i].PropertyPrint();
		}
	}
	cout << endl;
}

void Agency::PrintProperties(const char* typeOfProperty) {
	char apartment[] = "Apartments";
	char house[] = "Houses";
	char parcel[] = "Parcels";
	Apartment tempA;
	House tempH;
	Parcel tempP;

	if (strcmp(apartment, typeOfProperty) == 0)
	{
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t i = 0; i < 4; i++)
			{
				if (apartments[i].GetPrice() > apartments[i + 1].GetPrice())
				{
					tempA = apartments[i];
					apartments[i] = apartments[i + 1];
					apartments[i + 1] = tempA;
				}
			}
		}
		for (size_t i = 0; i < 5; i++)
		{
			apartments[i].PropertyPrint();

		}
	}

	if (strcmp(house, typeOfProperty) == 0)
	{
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t i = 0; i < 4; i++)
			{
				if (houses[i].GetPrice() > houses[i + 1].GetPrice())
				{
					tempH = houses[i];
					houses[i] = houses[i + 1];
					houses[i + 1] = tempH;
				}
			}
		}
		for (size_t i = 0; i < 5; i++)
		{
			houses[i].PropertyPrint();

		}
	}

	if (strcmp(parcel, typeOfProperty) == 0)
	{
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t i = 0; i < 4; i++)
			{
				if (parcels[i].GetPrice() > parcels[i + 1].GetPrice())
				{
					tempP = parcels[i];
					parcels[i] = parcels[i + 1];
					parcels[i + 1] = tempP;
				}
			}
		}

		for (size_t i = 0; i < 5; i++)
		{
			parcels[i].PropertyPrint();

		}
	}
	
}