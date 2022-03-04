#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int a = 0;
    int b = 1;
    int c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    while (true) {
        c = v[v.size() - 1] + v[v.size() - 2];
        v.push_back(c);
        if (c > num) {
            cout << c << endl;
            break;
        }
        else {
            cout << c << ", ";
        }
    }
}
