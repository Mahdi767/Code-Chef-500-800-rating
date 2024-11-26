#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        //     int L=z/30;
        //     int L1=(x+((z/30)+1))/y;
        // int L2=(x+(z/30))/y;
        // if(z%30 ==0){
        //     cout<<L2<<endl;
        // }else{
        //     cout<<L1<<endl;
        // }
        if ((x + (z / 30)) % y == 0)
            cout << (x + (z / 30)) / y << endl;
        else
            cout << ((x + ((z / 30))) / y) + 1 << endl;
    }
}
