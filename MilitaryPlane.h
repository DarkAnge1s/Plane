#pragma once
#include "Plane.h"
class MilitaryPlane
{
	friend class Airline;

private:
	string brand;
	string model;
	double price;
	int passenger;
	double speed;
	double length;
	double width;
	double heigth;
	double volume;
	string color;
public:

	MilitaryPlane();
	MilitaryPlane(string ibrand, string imodel, double iprice,
		int ipassenger, double ispeed, double ilength,
		double iwidth, double iheigth, double ivolume, string icolor);

	~MilitaryPlane();

	void setBrand(string brand);
	string getBrand();
	void setModel(string model);
	string getModel();
	void setPrice(double price);
	double getPrice();
	double getSpeed();
	void setSpeed(double speed);
	void setLength(double length);
	double getLength();
	double getWidth();
	void setwidth(double width);
	double getHeigth();
	void setHeigth(double heigth);
	void setVolume(double volume);
	double getVolume();
	string getColor();
	void setColor(string color);
	int getCount();
	string getInfo();
};


