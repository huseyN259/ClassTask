#include <iostream>
#include <vector>
#include <map>

using namespace std;

#include "penalty.h"
#include "car.h"

int main()
{
	map<Car*, vector<Penalty>> penalties;

	Car car1("Honda", "Civic", 1991);
	Car car2("Hyundai", "Scoupe", 1992);
	Car car3("Nissan", "Pathfinder", 2004);

	penalties[&car1].push_back(Penalty{ 1, "Qosha xett", "05.09.2022", 150 });
	penalties[&car1].push_back(Penalty{ 2, "Qirmizi ishiq", "04.25.2022", 70 });

	penalties[&car2].push_back(Penalty{ 1, "Qirmizi ishiq", "02.01.2022", 70 });

	penalties[&car3].push_back(Penalty{ 1, "Parking", "20.06.2022", 50 });
	penalties[&car3].push_back(Penalty{ 2, "Qirmizi ishiq", "09.03.2022", 70 });
	penalties[&car3].push_back(Penalty{ 3, "Speed", "25.07.2022", 100 });

	for (auto& p : penalties)
	{
		cout << "----- CARS -----" << endl;
		cout << *p.first << endl;

		cout << "----- PENALTIES -----" << endl;
		for (size_t i = 0; i < p.second.size(); i++)
			cout << p.second[i] << endl;
	}
}