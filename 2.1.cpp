#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;

	char chValue = 'A';
	char chValue2 = 65;
	float fValue = 3.14f; //f 붙여야함
	double dValue = 3.14;

	auto aValue = 3.14; //자료형이 double로 자동으로 결정됨
	auto aValue2 = 3.14f;//자료형이 float으로 자동으로 결정

	cout << chValue2 << endl; // 'A'출력
	cout << chValue << endl;//'A'출력

	cout << (int)chValue << endl;//65출력

	cout << (bValue ? 1 : 0) << endl;
	//true 면 1 false 면 0

	cout << fValue << endl;//3.14출력
	cout << dValue << endl;//3.14출력

	cout << sizeof(aValue) << endl; //변수의 메모리 사이즈 출력
	//8출력
	cout << sizeof(aValue2) << endl;//4출력
	cout << sizeof(bool) << endl;//자료형을 넣어도 출력됨, 1출력

	//변수 초기화 방법
	int a = 123;//copy initialization
	int b(123); //direct initialization
	int c{ 123 };//uniform initialization

	int k = 0, l = 456, m = 123;
	//가급적 모든 변수 초기화 시키기
	return 0;
}