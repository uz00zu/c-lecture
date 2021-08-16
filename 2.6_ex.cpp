#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

//정수 하나를 입력받고 그 숫자가 홀수인지 짝수인지
//출력하는 프로그램을 만들어 봅시다.
int main()
{
	using namespace std;

	int a = 0;

	cin >> a;

	if (a % 2 == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수" << endl;
	}

	return 0;
}