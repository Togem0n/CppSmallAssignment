/**

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***/

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    string s;
    cin >> s;
    map<char, int> m;
    vector<char> v;
    int flag = 1;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        c = toupper(c);
        map<char, int>::iterator it;
        it = m.find(c);
        if (it == m.end()) {
            pair<char, int> value(c, 1);
            m.insert(value);
            v.push_back(c);
        }
        else {
            flag = 0;
            break;
            it->second += 1;
        }
    }

    if (flag) {
        cout << "The number " << s << " is lucky" << endl;
    }
    else {
        cout << "The number " << s << " is not lucky" << endl;
    }

}