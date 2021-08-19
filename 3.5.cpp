#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << "Your input values are :" << x << " " << y << endl;

	if (x == y)
	{
		cout << "equal" << endl;
	}
	if (x != y)
	{
		cout << "Not equal" << endl;
	}
	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	if (x < y)
	{
		cout << "x is less than y" << endl;
	}
	if (x >= y)
	{
		cout << "x is greater than or equal to y" << endl;
	}
	if (x <= y)
	{
		cout << "x is less than or equal to y" << endl;
	}

	double d1(100 - 99.99);//0.01
	double d2(10 - 9.99);//0.01

	cout << d1 << endl;//0.01
	cout << d2 << endl;//0.01

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;

		if (d1 > d2)
			cout << "d1>d2" << endl;
		else
			cout << "d1<d2" << endl;
	}
	//Not equal, d1>d2 출력
	cout << std::abs(d1 - d2) << endl;//5.32907e-15출력
	//출력된 값만큼의 오차가 있음
	//이정도 오차는 무시하고 싶으면?
	const double epsilon = 1e-10;//허용가능한 오차값
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;
	//Approximately equal출력

	return 0;
}