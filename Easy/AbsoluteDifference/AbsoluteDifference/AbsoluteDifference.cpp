#include <bits/stdc++.h>
//#include <iostream>

using namespace std;

int Abs(int a, int b) {
    if (a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int main()
{
    cout << "Enter two numbers: " << endl;

    int a, b;
    cin >> a >> b;
    cout << "The absolute difference is " << Abs(a, b) << endl;
}
