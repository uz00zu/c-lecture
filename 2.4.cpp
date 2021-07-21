#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	//void my_void; 무치형은 변수선언 못 함

	int i = 123;
	float f = 123.456f;

	void* my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}