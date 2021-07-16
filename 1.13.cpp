#include<iostream>
using namespace std;

namespace MySpace1
{
	//namespace 안에 namespace추가 가능
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

int doSomething(int a, int b)
{
	return a * b;
}

int main()
{
	//using namespace MySpace1::InnerSpace;
	//my_function(); //InnerSpace안의 함수를 namespace 언급 없이 사용 가능
	
	cout << MySpace1::doSomething(3, 4) << endl;
	//함수 이름이 같아도 namespace가 다르면 다른 것!
	cout << doSomething(3, 4) << endl;

	return 0;
}