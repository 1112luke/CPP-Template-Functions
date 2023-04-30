//Luke Scholler
//CIS 1202
//April 30, 2023

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

//template for double and float
template <typename T>
T half(T num) {
	return num / 2;
}

//overloaded case for int due to rounding issues
int half(int);

using namespace std;

int main() {
	double num1 = 7;
	float num2 = 5;
	int num3 = 3;

	cout << half(num1) << endl;
	cout << half(num2) << endl;
	cout << half(num3) << endl;

	system("pause");
	return 0;
}

int half(int num) {
	return((num / 2) + (num % 2));
}