#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	//comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	//->++x;
	//++y;
	//int z = y; 라는 뜻
	cout << x << " " << y << " "<<z<<endl;//4 11 11

	//comma operator는 등호 연산자보다 우선순위가 낮다.
	int a = 1, b = 10;
	int z;

	z = a, b;//(z=a),b;와 같음
	cout << z << endl;//1출력

	z = (++a, a + b);
	cout << z << endl;//12출력

	//conditional operator
	bool onSale = true;
	const int price=(onSale == true)?10:100;
	//아래와 뜻이 같음 
	//근데 아래와 같이 하면 price를 const 못 함
	/*if (onSale)
	{
		price = 10;
	}
	else 
	{
		price = 100;
	}*/
	cout << price << endl;

	return 0;
}