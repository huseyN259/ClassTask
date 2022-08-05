#pragma once

class Car
{
	string make, model;
	int year;

public:
	Car(string make, string model, int year)
		: make(make), model(model), year(year) {}

	string& getMake() { return make; }
	string& getModel() { return model; }
	int& getYear() { return year; }

	friend ostream& operator<<(ostream& out, const Car& c);
};

ostream& operator<<(ostream& out, const Car& c)
{
	out << "Make : " << c.make << endl;
	out << "Model : " << c.model << endl;
	out	<< "Year : " << c.year << endl;
	
	return out;
}