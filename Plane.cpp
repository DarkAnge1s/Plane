#include  "Plane.h"

int Plane::count = 0;

string Plane::getInfo() {
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
Plane::Plane() {
	count++;
}
Plane::Plane(string ibrand, string imodel, double iprice,
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
	count++;
}

Plane::~Plane() {
	count--;
}
void Plane::setBrand(string brand) {
	this->brand = brand;
};
string Plane::getBrand() {
	return brand;
};
void Plane::setModel(string model) {
	this->model = model;
};
string Plane::getModel() {
	return model;
};
void Plane::setPrice(double price) {
	this->price = price;
};
double Plane::getPrice() {
	return price;
};
void Plane::setPassenger(int passenger) {
	this->passenger = passenger;
};
int Plane::getPassenger() {
	return passenger;
};
double Plane::getSpeed() {
	return speed;
};
void Plane::setSpeed(double speed) {
	this->speed = speed;
};
void Plane::setLength(double length) {
	this->length = length;
};
double Plane::getLength() {
	return length;
};
double Plane::getWidth() {

	return width;
};
void Plane::setwidth(double width) {
	this->width = width;
};
double Plane::getHeigth() {
	return heigth;
};
void Plane::setHeigth(double heigth) {
	this->heigth = heigth;
};
void Plane::setVolume(double volume) {
	this->volume = volume;
};
double Plane::getVolume() {
	return volume;
};
string Plane::getColor() {
	return color;
};
void Plane::setColor(string color) {
	this->color = color;
};

int Plane::getCount() {
	return count;
}