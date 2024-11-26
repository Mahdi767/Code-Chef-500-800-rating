#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int N,A,B;
   cin>>N>>A>>B;

    int Even= N/2;
    int Odd = (N+1)/2;

      int total= Even*A+Odd*B;
      cout<<total<<endl;
    }
}
