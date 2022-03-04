#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SwapByReference(float& a, float& b) {
    float tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void SwapByPointer(float *a, float *b) {
    float tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    cout << "Enter two numbers: ";
    float a, b;
    cin >> a >> b;

    swap(a, b);
    cout << endl << "Swap by STL: " << a << " " << b << endl;
    swap(a, b);


    SwapByReference(a, b);
    cout << endl << "Swap By Reference: " << a << " " << b << endl;
    SwapByReference(a, b);

    SwapByPointer(&a, &b);
    cout << endl << "Swap By Pointer: " << a << " " << b << endl;
    SwapByPointer(&a, &b);

}

