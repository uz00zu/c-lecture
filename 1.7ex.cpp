#include<iostream>
using namespace std;
void doSomething(int x)
{
	x = 123;
	cout << x << endl;
}

int main()
{
	int x = 0;
	cout << x << endl;  //0
	doSomething(x);  //123
	cout << x << endl;  //123

	return 0;
}