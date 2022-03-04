#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter numbers: " << endl;

    vector<int> v;

    do {
        int a;
        cin >> a;
        v.push_back(a);
    } while (getchar() != '\n');

    cout << endl << "Enter the number you want to find: ";
    int num;
    cin >> num;

    vector<int> pos;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == num) {
            pos.push_back(i);
        }
    }

    if (pos.size() == 0) {
        cout << endl << "Can not find number you want.";
    }
    else {
        cout << endl;
        cout << "The number " << num << " locate at position ";

        for (int i = 0; i < pos.size(); i++) {
            cout << pos[i] << " ";
        }
        cout << endl;
    }
}