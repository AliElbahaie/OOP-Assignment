#ifndef cars_h
#define cars_h
#include <iostream>
#include <string>
using namespace std;

class cars
{
	string car_brand;
	string car_type;
	string car_plate;
	int speed;
	int year_model;
public:
	cars();
	cars(string, int, int);

	void setCarBrand(string);
	void setCarType(string);
	void setCarPlate(string);
	void setSpeed(int);
	void setYearModel(int);
	string getCarBrand();
	string getCarType();
	string getCarPlate();
	int getSpeed();
	int getYearModel();



};
#endif // !cars_h
