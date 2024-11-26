#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x;
        cin >> x;
        if (x % 5 != 0) {
            cout << "-1" << endl;
        } 
        else if (x % 10 == 0) {
            cout << x / 10 << endl;
        } 
        else {
            cout << x / 10 + 1 << endl;
        }
    }
    return 0;
}