#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	int x = 5;
	int y = ++x;
	int z = x++;

	cout << y << endl;//6
	cout << z << endl;//6

	int a = 6, b = 6;
	cout << a << " " << b << endl;//6 6
	//앞에 증감연산자가 붙으면 계산 후 출력
	cout << ++a << " " << --b << endl;//7 5
	cout << a << " " << b << endl;//7 5
	//뒤에 증감연산자가 붙으면 출력 후 계산
	cout << a++<< " " << b-- << endl;//7 5
	cout << a << " " << b << endl;//8 4

	return 0;
}