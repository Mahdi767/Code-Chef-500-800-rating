#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long d;
        cin >> d;
      long long factorial = 1;
        for (int i = 1; i <= d; ++i) {
            factorial *= i;
        }
        std::cout << factorial << std::endl;
    }
}
