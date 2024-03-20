#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(){
	
	string a,b;

	int aInt;
	int bInt;

	int sumInt;
	int subInt;

	string sum = "";
	string sub = "";

	cout << "First Number    >> " << "";
	cin >> a;
	
	cout << "Second Number   >> " << "";
	cin >> b;

	aInt = stoi(a);
	bInt = stoi(b);

	sumInt = aInt + bInt;
    subInt = aInt - bInt;
	sum = to_string(sumInt);
    sub = to_string(subInt);
	
	cout << "Sum		>> " << sum << endl;
	
	cout << "Sub		>> " << sub << endl;
	
	
	
	return 0;
	
}