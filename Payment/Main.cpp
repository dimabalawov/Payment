
#include <iostream>
#include "Payment.h"
using namespace std;

int main()
{
	Payment a("Dmitro Balashov", 50, 2021, 7, 13);//��������� ���,�������� �� ����, ��� ���������� �� ������, �������� �������, ������� ���� � ������
	cout << "Net Income: " << a.NetIncomeCalc() << endl;;
	cout <<"Income: "<< a.IncomeCalc() << endl;
	cout << "Pending: " << a.PendingCalc() << endl;
}