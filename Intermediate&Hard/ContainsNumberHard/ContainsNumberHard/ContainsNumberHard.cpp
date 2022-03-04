#include <iostream>

using namespace std;

int main()
{
    cout << "Enter number a: ";
    int a;
    cin >> a;

    cout << "Enter number b: ";
    int b;
    cin >> b;

    int tmp = b;
    int found = 0;
    while (tmp != 0) {
        int remainder = tmp % 10;
        if (remainder == a) {
            found = 1;
            break;
        }
        tmp /= 10;
    }

    if (found) {
        cout << b << " contains the number " << a << endl;
    }
    else {
        cout << b << " does not contain the number " << a << endl;
    }
}