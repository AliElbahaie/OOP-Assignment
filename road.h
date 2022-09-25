#ifndef road_h
#define road_h
#include <iostream>
#include <string>
#include "cars.h"
using namespace std;

class road
{
	char road_type;
	int speed_limit;
	double counter;

public:

	road();
	road(char, int);

	void setRoadType(char);
	void setSpeedLimit(int);
	char getRoadType();
	int  getSpeedLimit();
	double getCounter();

	bool radar(int);
	void allow(string);
	int age(int);
	


};












#endif // !cars_h