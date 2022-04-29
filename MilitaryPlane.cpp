#include "MilitaryPlane.h"

string MilitaryPlane::getInfo() {
	return "Plane:\nbrand = " + brand
		+ ";\nmodel = " + model
		+ ";\nprice = " + to_string(price)
		+ ";\npassenger = " + to_string(passenger)
		+ ";\nspeed = " + to_string(speed)
		+ ";\nlength = " + to_string(length)
		+ ";\nwidth = " + to_string(width)
		+ ";\nheigth = " + to_string(heigth)
		+ ";\nvolume = " + to_string(volume)
		+ ";\ncolor = " + color;
}
MilitaryPlane::MilitaryPlane() {

}
MilitaryPlane::MilitaryPlane(string ibrand, string imodel, double iprice,
	int ipassenger, double ispeed, double ilength,
	double iwidth, double iheigth, double ivolume, string icolor)
{
	brand = ibrand;
	model = imodel;
	price = iprice;
	passenger = ipassenger;
	speed = ispeed;
	length = ilength;
	width = iwidth;
	heigth = iheigth;
	volume = ivolume;
	color = icolor;

}

MilitaryPlane::~MilitaryPlane() {

}
void MilitaryPlane::setBrand(string brand) {
	this->brand = brand;
};
string MilitaryPlane::getBrand() {
	return brand;
};
void MilitaryPlane::setModel(string model) {
	this->model = model;
};
string MilitaryPlane::getModel() {
	return model;
};
void MilitaryPlane::setPrice(double price) {
	this->price = price;
};
double MilitaryPlane::getPrice() {
	return price;
};

double MilitaryPlane::getSpeed() {
	return speed;
};
void MilitaryPlane::setSpeed(double speed) {
	this->speed = speed;
};
void MilitaryPlane::setLength(double length) {
	this->length = length;
};
double MilitaryPlane::getLength() {
	return length;
};
double MilitaryPlane::getWidth() {

	return width;
};
void MilitaryPlane::setwidth(double width) {
	this->width = width;
};
double MilitaryPlane::getHeigth() {
	return heigth;
};
void MilitaryPlane::setHeigth(double heigth) {
	this->heigth = heigth;
};
void MilitaryPlane::setVolume(double volume) {
	this->volume = volume;
};
double MilitaryPlane::getVolume() {
	return volume;
};
string MilitaryPlane::getColor() {
	return color;
};
void MilitaryPlane::setColor(string color) {
	this->color = color;
};
