#include "stdafx.h"
using namespace std;

class Airplane {
private:
	double landingTime, takeOffTime;
public:
	Airplane() {};
	Airplane(double l, double t) : landingTime(l), takeOffTime(t) { };
	~Airplane();
	double getTakeOffTime(){ return takeOffTime; }
	double getLandingTime() { return landingTime; }
	void setValues(double landingTime, double takeOffTime);

};