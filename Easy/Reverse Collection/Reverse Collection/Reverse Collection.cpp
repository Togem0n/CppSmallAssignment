#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;

    for (int i = str.size() - 1; i >= 0; i--) {
        cout << str[i];
    }
}
