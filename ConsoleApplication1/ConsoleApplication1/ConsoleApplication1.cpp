// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CBill
{
private:
	int year;
	int month;
	int day;

public:
	CBill();
	CBill(int y, int m, int d);
	int setCBill(int y, int m, int d);
	void displayCBill();
};
CBill::CBill()
{
	year = 2019;
	month = 1;
	day = 1;
}
CBill::CBill(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int CBill::setCBill(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	return 0;
}
void CBill::displayCBill()
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int main()
{
	CBill od;
	od.setCBill(2019, 1, 1);
	od.displayCBill();
	return 0;
}



