#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
  int x,y;
  cin>>x>>y;
  int t1=x+y;
   int A=500-x*2;
   int B=500-t1*2;
   int A1=1000-y*4;
   int B2=1000-t1*4;
   int total1=A+B2;
   int total2=B+A1;
   if(total1>total2){
    cout<<total1<<endl;
   }else if(total2>total1){
    cout<<total2<<endl;
   }else if(total1==total2){
    cout<<total1<<endl;
   }

}
}
