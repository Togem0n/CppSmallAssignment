#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string s;
    cin >> s;
    map<char, int> m;
    vector<char> v;
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
            it->second += 1;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        map<char, int>::iterator it;
        it = m.find(v[i]);
        cout << it->first << it->second << endl;
    }

}