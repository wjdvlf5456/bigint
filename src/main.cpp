#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(){

	// 자료형 선언
	string a,b;

	int aInt;
	int bInt;

	int sumInt;
	int subInt;

	string sum = "";
	string sub = "";


    // 원하는 숫자 입력
	cout << "First Number    >> " << "";
	cin >> a;
	
	cout << "Second Number   >> " << "";
	cin >> b;


    // string 타입을 int 타입으로 변환
	aInt = stoi(a);
	bInt = stoi(b);

	sumInt = aInt + bInt;
    subInt = aInt - bInt;

    // int 타입을 string 타입으로 변환
	sum = to_string(sumInt);
    sub = to_string(subInt);

    cout << sum[2];

	// 결과값 출력
	cout << "Sum		>> " << sum << endl;
	cout << "Sub		>> " << sub << endl;


	return 0;
	
}