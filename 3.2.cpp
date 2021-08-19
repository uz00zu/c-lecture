#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	int x = 7;
	int y = 4;

	//정수를 정수로 나눌때만 값이 정수로 나옴
	cout << x / y << endl;//1
	cout << float(x) / y << endl;//1.75
	cout << x / float(y) << endl;//1.75
	cout << float(x) / float(y) << endl;//1.75

	int z = x;
	z += y;//z=z+y
	return 0;
}