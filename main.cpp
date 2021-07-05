#include<iostream>

int main()
{
	using namespace std;
	int x = 0;
	cout << x << " " << &x << endl;//&x :  x의 주소, x : x주소에 해당하는 메모리에 들어있는 값
	{ //영역 구분하는 괄호
		int x = 1;
		cout << x << " " << &x << endl;
	}
	{
		x = 1;
		cout << x << " " << &x << endl;  //괄호 밖의 x와 같음 (같은 메모리 주소)
	}
	return 0;