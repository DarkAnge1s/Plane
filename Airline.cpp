#include "Airline.h"

Airline::Airline() {
	name = "no name airline";
	size = 0;
	list = NULL;
}
Airline::Airline(string name) {
	this->name = name;
	size = 0;
	list = NULL;
}
Airline::Airline(string name,int size,Plane* list) {
	this->name = name;
	this->size = size;
	this->list = list;
}

Airline::~Airline() {
	if (list != NULL) {
		delete[] list;
	}
}

string Airline::getName() {
	return name;
}

void Airline::setName(string name) {
	this->name = name;
}
int Airline::getSize() {
	return size;
}
void Airline::set(int index, Plane plane) {
	if (list != NULL && index < size && index >= size) {
		list[index] = plane;
	}
}
void Airline::add(Plane plane){
	if (list == NULL) {
		size = 1;
		list = new Plane[size];
		list[0] = plane;
	}
	else {
		Plane* temp = new Plane[size + 1];
		for (int i = 0; i < size ; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = plane;
		delete[] list;
		list = temp;
	}

};

string Airline::GetInfo() {

	if (list == NULL) {
		string msg = "Airline is" + name + "empty";
		return msg;
	}
	else {
		string msg = "Planes " + name + "Airline:\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].getInfo();
		}
		return msg;
	}
}