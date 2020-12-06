// Christopher Dickerson
// 12/6/2020
// CIS 1202

#include <iostream>

using namespace std;

template <class num>

num half(num n) {
	n = n / 2.0;
	return n;
}


int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 4;

	cout << half(a) << "\n";
	cout << half(b) << "\n";
	cout << half(c) << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
