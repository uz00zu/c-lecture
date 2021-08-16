#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

bool isEqual(int a, int b)
{
	bool result = (a == b);
	return result;
}

int main()
{
	using namespace std;

	bool b1 = true; //copy initialization
	bool b2(false); //direct '''
	bool b3{ true }; //uniform '''
	b3 = false;

	//숫자로 출력
	cout << b3 << endl; //0
	cout << b1 << endl; //1

	//true false로 출력
	cout << std::boolalpha;
	cout << b3 << endl; //0
	cout << b1 << endl; //1

	//숫자로 출력
	//! = not operater
	cout << std::noboolalpha;
	cout << !b3 << endl; //0
	cout << !b1 << endl; //1

	//&& = and operater
	cout << (true && true) << endl; //1
	cout << (true && false) << endl; //0
	cout << (false&& true) << endl; //0
	cout << (false && false) << endl; //0

	//|| = or operater
	cout << (true || true) << endl; //1
	cout << (true || false) << endl; //1
	cout << (false || true) << endl; //1
	cout << (false || false) << endl; //0
	
	// if문은 괄호 안의 bool타입에 따라 조건이
	//실행될지 안될지 결정됨 (true면 실행 false면 ㄴㄴ)
	if (false)
	{
		cout << "this is true" << endl;
	}
	//괄호가 아니면 else 조건 실행
	else
	{
		cout << "this is false" << endl;
	}
	
	//isEqual 함수 사용
	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl; //true
	cout << isEqual(1, 2) << endl; //false

	if (5) //0이면 false 나머지는 전부 true
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	bool b;
	cin >> b;
	cout << "Your input : " << b << endl;
	return 0;
}