#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, k;
        cin >> a >> b >> k;
        int result;

        if (a > b) {
            result = (a - b + k - 1) / k; // ceil((a - b) / k)
        } else if (a < b) {
            result = (b - a + k - 1) / k; // ceil((b - a) / k)
        } else {
            result = 0;
        }

        cout << result << endl;
    }
    return 0;
}
