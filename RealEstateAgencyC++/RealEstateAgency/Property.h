#include <iostream>
#pragma once


class Property
{
protected:
	char address[20];
	char owner[20];
	double price;
	int area;
public:
	Property();
	Property(const char* address, const char* owner, const double price, const int area);
	Property(Property& pr);
	~Property();
	virtual Property& operator=(const Property& pr);
	virtual char* GetAddress();
	virtual double GetPrice();
	void setProperty(const char* address, const char* owner, const double price, const int area);
	virtual void PropertyPrint();


};

