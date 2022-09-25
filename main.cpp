#include "cars.h"
#include "road.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

void allow(string);

int main()
{
	queue <cars> car_queue;
	road A('A', 100), B('B', 80), C('C', 60);


	//1- Car 1
	car_queue.push(cars("Ferrari", 100, 2020));
	car_queue.back().setCarType("Private");
	car_queue.back().setCarPlate("ABC 100");

	//2- Car 2
	car_queue.push(cars("Bugatti", 110, 2019));
	car_queue.back().setCarType("Private");
	car_queue.back().setCarPlate("ABC 101");

	//3- Car 3
	car_queue.push(cars("Mitsubishi Lancer Evo", 400, 2017));
	car_queue.back().setCarType("Private");
	car_queue.back().setCarPlate("AWL 1");

	//4- Motorcycle 1
	car_queue.push(cars("Ducati", 200, 2022));
	car_queue.back().setCarType("Motorcycle");
	car_queue.back().setCarPlate("MOOT 200");

	//5- Motorcycle 2
	car_queue.push(cars("Honda", 250, 2015));
	car_queue.back().setCarType("Motorcycle");
	car_queue.back().setCarPlate("MOOT 201");

	//6- Motorcycle 3
	car_queue.push(cars("Fisba", 50, 2001));
	car_queue.back().setCarType("Motorcycle");
	car_queue.back().setCarPlate("3AYESH 202");

	//7- Bus 1
	car_queue.push(cars("Suzuki", 60, 1999));
	car_queue.back().setCarType("Bus");
	car_queue.back().setCarPlate("yasta 300");

	//8- Bus 2
	car_queue.push(cars("Mercades", 80, 2003));
	car_queue.back().setCarType("Bus");
	car_queue.back().setCarPlate("yasta 301");

	//9- Truck 1
	car_queue.push(cars("Toyota", 70, 2000));
	car_queue.back().setCarType("Truck");
	car_queue.back().setCarPlate("hadoosak 400");

	//10- Truck 2
	car_queue.push(cars("Nasr", 40, 2005));
	car_queue.back().setCarType("Truck");
	car_queue.back().setCarPlate("Hadoosak 401");

	while (!car_queue.empty())
	{
		cout << "car type: " << car_queue.front().getCarType() << endl;

		A.allow(car_queue.front().getCarType());
		B.allow(car_queue.front().getCarType());
		C.allow(car_queue.front().getCarType());
		cout << "\n\n";

		cout << "Fines: " << endl;
		if (car_queue.front().getCarType() == "Private" || car_queue.front().getCarType() == "Motorcycle")
		{
			if (A.radar(car_queue.front().getSpeed()))
			{
				cout << "This car is fined on road A: " << endl;
				cout << "- Brand: "<< car_queue.front().getCarBrand() << endl;
				cout << "- Type: "<< car_queue.front().getCarType() << endl;
				cout << "- Lisence Plate: "<< car_queue.front().getCarPlate() << endl;
				cout << "- Speed: "<< car_queue.front().getSpeed() << endl;
				cout << "- Year Model: "<< car_queue.front().getYearModel() << endl;
				cout << "- Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";

			}
			else
			{
				cout << "This car has no fines on Road A:)" << endl;
				cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}
			if (B.radar(car_queue.front().getSpeed()))
			{
				cout << "This car is fined on road B: " << endl;
				cout << "- Brand: " << car_queue.front().getCarBrand() << endl;
				cout << "- Type: " << car_queue.front().getCarType() << endl;
				cout << "- Lisence Plate: " << car_queue.front().getCarPlate() << endl;
				cout << "- Speed: " << car_queue.front().getSpeed() << endl;
				cout << "- Year Model: " << car_queue.front().getYearModel() << endl;
				cout << "- Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}
			else
			{
				cout << "This car has no fines on road B :)" << endl;
				cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}

		}

		else if (car_queue.front().getCarType() == "Truck")
		{
			if (C.radar(car_queue.front().getSpeed()))
			{
				cout << "This car is fined on road C: " << endl;
				cout << "- Brand: " << car_queue.front().getCarBrand() << endl;
				cout << "- Type: " << car_queue.front().getCarType() << endl;
				cout << "- Lisence Plate: " << car_queue.front().getCarPlate() << endl;
				cout << "- Speed: " << car_queue.front().getSpeed() << endl;
				cout << "- Year Model: " << car_queue.front().getYearModel() << endl;
				cout << "- Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";

			}
			else
			{
				cout << "This car has no fines on road C :)" << endl;
				cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}
			if (B.radar(car_queue.front().getSpeed()))
			{
				cout << "This car is fined on road B: " << endl;
				cout << "- Brand: " << car_queue.front().getCarBrand() << endl;
				cout << "- Type: " << car_queue.front().getCarType() << endl;
				cout << "- Lisence Plate: " << car_queue.front().getCarPlate() << endl;
				cout << "- Speed: " << car_queue.front().getSpeed() << endl;
				cout << "- Year Model: " << car_queue.front().getYearModel() << endl;
				cout << "- Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";

			}
			else
			{
				cout << "This car has no fines on road B :)" << endl;
				cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}

		}
		else if (car_queue.front().getCarType() == "Truck")
		{

			if (B.radar(car_queue.front().getSpeed()))
			{
				cout << "This car is fined on road B: " << endl;
				cout << "- Brand: " << car_queue.front().getCarBrand() << endl;
				cout << "- Type: " << car_queue.front().getCarType() << endl;
				cout << "- Lisence Plate: " << car_queue.front().getCarPlate() << endl;
				cout << "- Speed: " << car_queue.front().getSpeed() << endl;
				cout << "- Year Model: " << car_queue.front().getYearModel() << endl;
				cout << "- Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}
			else
			{
				cout << "This car has no fines on road B :)" << endl;
				cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
				cout << "\n";
			}

		}
		else
		{
			cout << "This car has no fines :)" << endl;
			cout << "Car Age: " << A.age(car_queue.front().getYearModel()) << " Years" << endl;
			cout << "\n";
		}
		cout << "\n\n";





		car_queue.pop();


	}
	cout << "- Cars passed by road A = " << A.getCounter() << endl;
	cout << "- Cars passed by road B = " << B.getCounter() << endl;
	cout << "- Cars passed by road C = " << C.getCounter() << endl;

	cout << "\n";

	cout << "The Efficiency in road A = " << (A.getCounter() / B.getCounter())*100 << "% " << endl;
	cout << "The Efficiency in road A = " << (B.getCounter() / B.getCounter()) * 100 << "% " << endl;
	cout << "The Efficiency in road A = " << (C.getCounter() / B.getCounter()) * 100 << "% " << endl;


}

