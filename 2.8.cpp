#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	unsigned int n = 5u;//u는 unsigned int임을 명확하게 해줌
	long n2 = 5L;

	//Decimal : 0 1 2 3 4 5 6 7 8 9 10
	//Octal : 0 1 2 3 4 5 6 7 10 11 12 ...
	//Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11..

	int x = 012; //앞에 0을 붙이면 8진수라는 뜻
	cout << x << endl;//10 출력

	int y = 0xF;//앞에 0x를 붙이면 16진수라는 뜻
	cout << y << endl;//15 출력

	int z = 0b1010;//앞에 0b가 붙으면 2진수
	cout << z << endl;//10출력

	int b = 0b101'0111'0111;//이런식으로 숫자를 
	//읽기 편하게 하기위해 숫자사이에 문자끼워도 됨

	return 0;
}