#include<iostream>
using namespace std;
//declaration
bool iseven(int x);

int main() {
	int num;
	cout << "enter a number" << endl;
	cin >> num;
	if (iseven(num) == true)
		cout << "Your number is even!" << endl;
	else
		cout << "Your number is odd!" << endl;
}
//definition
bool iseven(int x) {
	if (x%2 == 0)
		return true;
	else
		return false;
}
	
