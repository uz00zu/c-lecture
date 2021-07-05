#include<iostream>
using namespace std;

int main()
{
	int x = 2; // x는 변수, 2는 상수(literal)

	int y = (x > 0) ? 1 : 2; // x>0이 참이면 왼쪽 실행 아니면 오른쪽

	cout << y << endl; // 1출력

	return 0;
}