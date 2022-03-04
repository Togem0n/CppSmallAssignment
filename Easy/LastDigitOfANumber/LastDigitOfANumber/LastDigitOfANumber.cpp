//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter an integer number: ";
	int a;
	cin >> a;
	vector<int> v;

	while (a != 0) {
		int tmp = a % 10;
		a /= 10;
		v.push_back(tmp);
	}

	cout << endl << "Last digit is: " << v[v.size() - 1] << endl;

	cout << endl << "Digit in order: ";
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
	
	cout << endl;

	cout << endl << "Digit in reverse order: ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
