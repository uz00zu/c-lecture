#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	//logical NOT
	bool x = true;

	cout << !x << endl;//false출력

	//logical AND
	bool a = true;
	bool b = false;

	cout << (a && b) << endl;//false출력

	//logical OR
	bool c = true;
	bool d = false;

	cout << (c || d) << endl;//true출력

	//short circuit evaluation
	int k = 1;
	int y = 2;

	if (k == 1 && y++ == 2)
	{
		//do something
	}
	cout << y << endl;//3
	//k가 2로 바뀌면 2출력
	//왜냐하면 앞에 있는게 false기 때문에 y가 계산되지 않음

	//XOR
	//false false false
	//false true true
	//true false true
	//true true false
	bool v = true;
	bool l = false;
	cout << (v != l) << endl;//1

	return 0;
}