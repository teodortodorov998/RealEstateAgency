#include "Property.h"
#include <iostream>
#include <string>

using namespace std;

Property::Property() {
	strcpy(address, "");
	strcpy(owner, "");
	price = 0;
	area = 0;
}

Property::Property(const char* address, const char* owner, const double price, const int area) {
	strcpy_s(this->address, address);
	strcpy_s(this->owner, owner);
	this->price = price;
	this->area = area;
}

Property::Property(Property& pr) {
	strcpy_s(this->address, pr.address);
	strcpy_s(this->owner, pr.owner);
	this->price = pr.price;
	this->area = pr.area;
}

Property::~Property(){}

Property& Property::operator=(const Property& pr) {
	strcpy_s(this->address, pr.address);
	strcpy_s(this->owner, pr.owner);
	this->price = pr.price;
	this->area = pr.area;
	return *this;
}

char* Property::GetAddress() {
	return address;
}

double Property::GetPrice() {
	return price;
}

void Property::setProperty(const char* address, const char* owner, const double price, const int area) {
	strcpy(this->address, address);
	strcpy(this->owner, owner);
	this->price = price;
	this->area = area;
}

void Property::PropertyPrint() {
	cout << "Address: " << address << endl;
	cout << "Owner: " << owner << endl;
	cout << "Price: " << price << endl;
	cout << "Area: " << area << endl;
}
