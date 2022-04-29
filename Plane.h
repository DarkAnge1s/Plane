#include "header.h"

class Plane {
	friend class Airline;

private:
	static int count;
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

	Plane();	
	Plane(string ibrand, string imodel, double iprice,
		int ipassenger, double ispeed, double ilength,
		double iwidth, double iheigth, double ivolume, string icolor);

	~Plane();

	void setBrand(string brand);
	string getBrand();
	void setModel(string model);
	string getModel();
	void setPrice(double price);
	double getPrice();
	void setPassenger(int passenger);
	int getPassenger();
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


class student {
private:
	string name;
	string age;
public:
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getAge() {
		return stoi(age);
	}
	void setAge(int age) {
		if (age >= 14 && age <= 30) {
			this->age = to_string(age);
		}
	}


	
	string getInfo() {
		return name + ": age = " + age;
	}
	string getStringAge() {
		return age;
	}
	void setAge(string age) {
		int number = stoi(age);
		if (number >= 14 && number <= 30) {
			this->age = age;
		}
	}
};