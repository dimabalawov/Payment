#pragma once
#include <iostream>
using namespace std;
class Payment
{
	string name;
	double income;
	unsigned int startyear;
	int bonusprcnt;
	unsigned int workdays;
public:
	Payment();
	Payment(string n, double in, unsigned int sy, int bp, unsigned int wd);
	double IncomeCalc();
	double PendingCalc();
	double NetIncomeCalc();
	int WorkExpCalc(int curryear);
};
