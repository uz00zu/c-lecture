#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;
void printNumber(const int my_number)
{
	cout << my_number << endl;
}
//파라미터에 const를 넣는 이유
//함수 내부에서 함수에 입력된 파라미터 값을 
//임의로 바꾸지 못하게 막기 위해
int main()
{
	printNumber(123);

	const double gravity{ 9.8 };//double const라고 써도 무방
	//gravity를 9.8로 지정
	//gravity를 임의로 바꾸려고 하면 오류남

	constexpr int my_const(123);//컴파일 타임 상수

	int number;
	cin >> number;

	const int special_number(number);//런타임 상수
	//실행을 시켜야 상수값이 결정되기 때문에

	const int price_per_item = 30;
	int num_item = 123;

	int price = num_item * price_per_item;
	//변수명으로 설명 굳이 주석처리 하지 말고

	return 0;
}