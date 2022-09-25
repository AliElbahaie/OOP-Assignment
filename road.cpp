#include "road.h"

road::road()
{
	road_type = 'B';
	speed_limit = 60;
	counter = 0;
}

road::road(char Road_Type, int Speed_Limit)
{
	road_type = Road_Type;
	speed_limit = Speed_Limit;
	counter = 0;
}

void road::setRoadType(char Road_Type)
{
	road_type = Road_Type;
}

void road::setSpeedLimit(int Speed_Limit)
{
	speed_limit = Speed_Limit;
}

char road::getRoadType()
{
	return road_type;
}

int road::getSpeedLimit()
{
	return speed_limit;
}

double road::getCounter()
{
	return counter;
}

bool road::radar(int Car_Speed)
{
	if (Car_Speed <= speed_limit)
		return false;
	else
		return true;
}

void road::allow(string Car_Type)
{
	if (road_type == 'A')
	{
		if (Car_Type == "Private" || Car_Type == "Motorcycle")
		{
			cout << "Allowed on road A" << endl;
			counter++;
		}
		else
			cout << "Not Allowed on road A" << endl;
	}
	else if (road_type == 'C')
	{
		if (Car_Type == "Truck")
		{
			cout << "Allowed in road C" << endl;
			counter++;
		}
		else
			cout << "Not Allowed on road C" << endl;
	}
	else
	{
		cout << "Allowed on road B" << endl;
		counter++;
	}
	


}


int road::age(int Year_Model)
{
	return 2022 - Year_Model;
}
