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
    cout << "Enter 1 if you want to compress a string, enter 2 if you want to decompress a string: ";
    int option;
    cin >> option;
    if (option == 1) {
        cout << "Enter a string you want to compress: ";
        string s;
        cin >> s;
        map<char, int> m;
        vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            //c = toupper(c);
            map<char, int>::iterator it;
            it = m.find(c);
            if (it == m.end()) {
                pair<char, int> value(c, 1);
                m.insert(value);
                v.push_back(c);
            }
            else {
                it->second += 1;
            }
        }

        for (int i = 0; i < v.size(); i++) {
            map<char, int>::iterator it;
            it = m.find(v[i]);
            cout << it->first << it->second;
        }
    }
    else if(option == 2) {
        cout << "Enter a string you want to decompress: ";
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 1) {
                int cnt = s[i] - '0';
                for (int j = 0; j < cnt; j++) {
                    cout << s[i - 1];
                }
            }
        }
    }
}