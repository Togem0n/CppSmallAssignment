#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int cnt = 0;
    int min = 0;
    int max = 100;

    bool continueFlag = false;
    bool breakFlag = false;
    while (true) {
        srand(time(0));
        int r = rand() % 100 + 1;

        while (true) {
            cout << "Guess a number between " << min << " and " << max << endl;
            int a;
            cin >> a;
            cnt++;
            if (r > a) {
                min = a;
            }
            if (r < a) {
                max = a;
            }
            if (r == a) {
                cout << "Congrats, " << a << " is correct, it took you " << cnt << " tries" << endl;
                cnt = 0;
                min = 0;
                max = 100;
                cout << "Press Enter to continue, Esc to exit" << endl;
                char c;
                c = _getch();
                if (c == 27) {
                    breakFlag = true;
                    break;
                }
                else {
                    continueFlag = true;
                    break;
                }
            }
        }

        if (continueFlag) {
            continueFlag = !continueFlag;
            continue;
        }
        if (breakFlag) break;
    }

}
