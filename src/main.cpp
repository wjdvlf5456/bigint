#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class BigInteger {

private:
	string number;

public:
	BigInteger() :
			number("0") {
	}

	BigInteger(const string &num) :
			number(num) {

	}

	// 문자열 형태로 큰 정수 반환
	string toString() const {
		return number;
	}

	// 큰 정수 덧셈
	BigInteger add(const BigInteger &other) const {
		string result;

		int carry = 0;
		int i = number.size() - 1;
		int j = other.number.size() - 1;

		while (i >= 0 || j >= 0 || carry > 0) {
			int sum = carry;
			if (i >= 0) {
				sum += number[i] - '0';
				i--;
			}
			if (j >= 0) {
				sum += other.number[j] - '0';
				j--;
			}
			carry = sum / 10;
			result.insert(result.begin(), (sum % 10) + '0');
		}

		return BigInteger(result);
	}
};

int main() {

	string a;
	string b;

	cin >> a;
	cin >> b;

	BigInteger num1(a); //"123456789012345678901234567890"
	BigInteger num2(b); //"987654321098765432109876543210");

	BigInteger sum = num1.add(num2);

	cout << "Sum: " << sum.toString() << endl;

	return 0;
}
