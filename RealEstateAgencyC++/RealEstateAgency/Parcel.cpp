#include "Parcel.h"
#include <iostream>
#include <string>

using namespace std;

Parcel::Parcel():Property() {
	isThereWater = false;
	isThereElectricity = false;
	isItCloseToARoad = false;
}

Parcel::Parcel(bool isThereWater, bool isThereElectricity, bool isItCloseToARoad, const char* anAddress, const char* anOwner, double aPrice, int anArea):Property(anAddress,anOwner,aPrice,anArea) {
	this->isThereWater = isThereWater;
	this->isThereElectricity = isThereElectricity;
	this->isItCloseToARoad = isItCloseToARoad;
}

Parcel::Parcel(Parcel& p):Property(p) {
	this->isThereWater = p.isThereWater;
	this->isThereElectricity = p.isThereElectricity;
	this->isItCloseToARoad = p.isItCloseToARoad;
}

Parcel::~Parcel(){}

Parcel& Parcel::operator=(const Parcel& p) {
	this->isThereWater = p.isThereWater;
	this->isThereElectricity = p.isThereElectricity;
	this->isItCloseToARoad = p.isItCloseToARoad;
	strcpy_s(this->address, p.address);
	strcpy_s(this->owner, p.owner);
	this->price = p.price;
	this->area = p.area;
	return *this;
}

char* Parcel::GetAddress() {
	return address;
}

double Parcel::GetPrice() {
	return price;
}

void Parcel::PropertyPrint() {
	if (isThereWater == true)
	{
		cout << "There is water." << endl;
		
	}
	else if (isThereWater == false) {
		cout << "There is no water." << endl;
	}

	if (isThereElectricity == true)
	{
		cout << "There is electricity." << endl;

	}
	else if (isThereElectricity == false) {
		cout << "There is no electricity." << endl;
	}

	if (isItCloseToARoad == true)
	{
		cout << "It is close to a road." << endl;

	}
	else if (isItCloseToARoad== false) {
		cout << "It's not close to a road." << endl;
	}
	cout << "Address: " << address << endl;
	cout << "Owner: " << owner << endl;
	cout << "Price: " << price << endl;
	cout << "Area: " << area << endl;
}
