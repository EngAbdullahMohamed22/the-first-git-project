#include <iostream>
using namespace std;
bool Prime(int x) {
	if (x < 2)return false;
	for (int i = 2;i * i <= x;i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
void main() {
	int n;
	cout << "please Enter your number which is you wanna ensure is prime or not from 2 to your number : ";
	cin >> n;
	for (int i = 2;i <= n;i++) {
		Prime(i) ? cout << i << " is Prime number\n" : cout << i << " is not Prime number\n";
	}

}