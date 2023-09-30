

#include <iostream>
#include "Payment.h"
const int TAX = 13;
Payment::Payment()
{
	name = "Unknown";
	income = 0;
	startyear = 0;
	bonusprcnt = 0;
	workdays = 0;
}
Payment::Payment(string n, double in, unsigned int sy, int bp, unsigned int wd)
{
	name = n;
	income = in;
	startyear = sy;
	bonusprcnt = bp;
	workdays = wd;
}
double Payment::IncomeCalc()
{
	double income=this->income*workdays;
	int prcnt = (income / 100) * bonusprcnt;
	income += prcnt;
	return income;
}
double Payment::PendingCalc()
{
	double pending=0;
	double income = IncomeCalc();
	pending += (income / 100) * 13;
	pending += (income / 100);
	return pending;
}
double Payment::NetIncomeCalc()
{
	double net;
	return net = IncomeCalc() - PendingCalc();
}
int Payment::WorkExpCalc(int curryear)
{
	int work = curryear - startyear;
	return work;
}

