#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	//A A 65 65

	// c-style casting
	cout << (char)65 << endl; //A
	cout << (int)'A' << endl; //65

	//cpp-style casting
	cout << char(65) << endl; //A
	cout << int('A') << endl; //65

	cout << static_cast<char>(65) << endl;//A
	cout << static_cast<int>('A') << endl;//65

	//static_cast에 변수 넣기도 가능
	char ch(97);
	cout << ch << endl;//a
	cout << static_cast<int>(ch) << endl;//97
	cout << ch << endl;//a

	//입력 버퍼
	//input : abc
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//a 97

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//b 98

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//c 99
	//입력을 한번 더 받으면 입력버퍼에서 입력을 기다림
	//새로 입력된 값의 결과 출력
	cin >> c1; //d입력
	cout << c1 << " " << static_cast<int>(c1) << endl;//d 100

	//char의 크기와 최대 최소
	cout << sizeof(char) << endl;//1bytes
	cout << (int)std::numeric_limits<char>::max() << endl;//127
	cout << (int)std::numeric_limits<char>::lowest() << endl;//-128

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;//255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;//0

	//escape sequence
	//\n new line
	cout << int('\n') << endl;//10
	cout << "This is first line \nsecond line";//\n은 문자
	cout << "This is first line" << endl;
	cout << "second line";//endl은 버퍼 속 모든 것 출력

	//\t tab
	//\"은 " 출력
	//\?은 ? 출력
	//\a은 소리남
	cout << int('t') << endl;//9
	cout << "This is first line \tsecond line \"" << endl;

	return 0;
}