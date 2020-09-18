#include "Apartment.h"
#include <iostream>
#include <string>

using namespace std;

Apartment::Apartment():Property() {
	numberOfRooms = 0;
	floor = 0;
	
}

Apartment::Apartment(int numberOfRooms, int floor, const char* anAddress, const char* anOwner, double aPrice, int anArea):Property(anAddress, anOwner, aPrice, anArea) {
	this->numberOfRooms = numberOfRooms;
	this->floor = floor;
	
}

Apartment::Apartment(Apartment& a):Property(a) {
	this->numberOfRooms = a.numberOfRooms;
	this->floor = a.floor;
	
}

Apartment::~Apartment(){}

Apartment& Apartment::operator = (const Apartment& ap){
	this->numberOfRooms = ap.numberOfRooms;
	this->floor = ap.floor;
	strcpy_s(this->address, ap.address);
	strcpy_s(this->owner, ap.owner);
	this->price = ap.price;
	this->area = ap.area;
	return *this;
}


void Apartment::PropertyPrint() {
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Floor: " << floor << endl;
	cout << "Address: " << address << endl;
	cout << "Owner: " << owner << endl;
	cout << "Price: " << price << endl;
	cout << "Area: " << area << endl;
	cout << endl;
}

char* Apartment::GetAddress() {
	return address;
}

double Apartment::GetPrice() {
	return price;
}