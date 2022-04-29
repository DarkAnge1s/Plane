#pragma once
#include "Plane.h"
class Airline
{
	friend class Manager;


private:
	string name;
	int size;
	Plane* list;

public:
	Airline();
	Airline(string name);
	Airline(string name, int size, Plane* list);

	~Airline();

	string getName();
	void setName(string name);
	int getSize();

	void set(int index,Plane plane);
	void add(Plane plane);
	string GetInfo();
};

