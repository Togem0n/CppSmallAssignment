//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the number: ";
	int a;
	cin >> a;
	bool test = a % 2 == 0 ? true : false;
	if (test) cout << a << " is a even number" << endl;
	else cout << a << " is an odd number" << endl;
}
