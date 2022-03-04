#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter Number A = ";
    cin >> a;

    int b;
    cout << "Enter Number B = ";
    cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap, Number A = " << a << " Number B = " << b << endl;

    return 0;

}