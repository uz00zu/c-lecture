#include <iostream>

using namespace std;
//#define의 효과는 해당 파일 안에서만 작동
#define MAX(a,b) ((a>b)?a:b)
//매크로를 만나면 매크로가 지칭하는 거로 교체
#define LIKE_APPLE

int main()
{
//전처리기 안에서는 매크로가 교체되지 않음
#ifdef LIKE_APPLE //LIKE_APPLE이 있으면 실행
	cout << "Apple" << endl;
#endif //ifdef가 끝날때 무조건 있어야함

#ifndef LIKE_APPLE //LIKE_APPLE이 없으면 실행
	cout << "Orange" << endl;
#endif  //필수로 있어야 해


	cout << MAX(1,2) << endl;
	return 0;
}