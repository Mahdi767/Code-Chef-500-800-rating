/**
 *    author:  Mahdi Hasan
 *    created: 2024-10-13 10:05:17
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x;
        cin>>x;
        int sum = x/2;
        int k = x-sum;
        cout<<(k*3)+(sum*-1)<<endl;
    }
    return 0;
}