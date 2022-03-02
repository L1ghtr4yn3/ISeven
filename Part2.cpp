#include<iostream>
using namespace std;
//declaration
bool iseven(int x);
bool DivByFive(int x);


int main() {
	int num;
	cout << "enter a number" << endl;
	cin >> num;
	if (iseven(num) == true)
		cout << "Your number is even!" << endl;
	else
		cout << "Your number is odd!" << endl;
	if (DivByFive(num) == true)
		cout << "Your number is Divisible by five!" << endl;
	else
		cout << "Your number isn't divisible by five!" << endl; 
}
//definition
bool iseven(int x) {
	if (x%2 == 0)
		return true;
	else
		return false;
}
bool DivByFive(int x) {
	if (x % 5 == 0)
		return true;
	else
		return false;
}
