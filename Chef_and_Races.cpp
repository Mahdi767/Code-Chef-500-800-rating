#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
 int cnt =0;
while(T--){
     int cnt =0;
   int x,y,a,b;
   cin>>x>>y>>a>>b;
   if(x!=a && x != b) 
   cnt++;
    if(y != a && y != b)
 cnt++;
   
    cout<<cnt<<endl;
}
   }
    


