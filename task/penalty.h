#pragma once

class Penalty
{
	int id;
	string text, dateTime;
	double price;

public:
	Penalty(int id, string text, string dateTime, double price)
		: id(id), text(text), dateTime(dateTime), price(price) {}

	int& getId() { return id; }
	string getText() const { return text; }
	string getDateTime() const { return dateTime; }
	double getPrice() const { return price; }

	friend ostream& operator<<(ostream& out, const Penalty& p);
};

ostream& operator<<(ostream& out, const Penalty& p)
{
	out << "Id : " << p.id << endl;
	out << "Text : " << p.text << endl;
	out << "DateTime : " << p.dateTime << endl;
	out << "Price : " << p.price << endl;
	
	return out;
}