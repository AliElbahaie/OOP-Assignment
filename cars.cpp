#include "cars.h"


cars::cars()
{
		car_brand =
		car_type = " ";
		car_plate = " ";
		speed = 0;
		year_model = 0;

}

cars::cars(string Car_Brand, int Max_Speed, int Year_Model)
{
	
		car_brand = Car_Brand;
		speed = Max_Speed;
		year_model = Year_Model;
	
}

void cars::setCarBrand(string Car_Brand)
{
	car_brand = Car_Brand;

}

void cars::setCarType(string Car_Type)
{
	car_type = Car_Type;
}

void cars::setCarPlate(string Car_Plate)
{
	car_plate = Car_Plate;
}

void cars::setSpeed(int Speed)
{
	speed = Speed;
}

void cars::setYearModel(int Year_Model)
{
	year_model = Year_Model;
}

string cars::getCarBrand()
{
	return car_brand;
}

string cars::getCarType()
{
	return car_type;
}

string cars::getCarPlate()
{
	return car_plate;
}

int cars::getSpeed()
{
	return speed;
}

int cars::getYearModel()
{
	return year_model;
}





