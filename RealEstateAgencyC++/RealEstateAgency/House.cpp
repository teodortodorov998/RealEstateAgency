#include "House.h"
#include <iostream>
#include <string>

using namespace std;

House::House():Property() {
	numberOfRooms = 0;
	numberOfFloors = 0;
	yardArea = 0;
}

House::House(const int numberOfRooms, const int numberOfFloors, const int yardArea, const char* anAddress, const char* anOwner, double aPrice, int anArea):Property(anAddress,anOwner,aPrice,anArea) {
	this->numberOfRooms = numberOfRooms;
	this->numberOfFloors = numberOfFloors;
	this->yardArea = yardArea;
}

House::House(House& h):Property(h) {
	this->numberOfRooms = h.numberOfFloors;
	this->numberOfFloors = h.numberOfFloors;
	this->yardArea = h.yardArea;
}

House::~House(){}

House& House::operator=(const House& h) {
	this->numberOfRooms = h.numberOfFloors;
	this->numberOfFloors = h.numberOfFloors;
	this->yardArea = h.yardArea;
	strcpy_s(this->address, h.address);
	strcpy_s(this->owner, h.owner);
	this->price = h.price;
	this->area = h.area;
	return *this;
}

char* House::GetAddress() {
	return address;
}

double House::GetPrice() {
	return price;
}

void House::PropertyPrint() {
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Number of floors: " << numberOfFloors << endl;
	cout << "Yard area: " << yardArea << endl;
	cout << "Address: " << address << endl;
	cout << "Owner: " << owner << endl;
	cout << "Price: " << price << endl;
	cout << "Area: " << area << endl;
}