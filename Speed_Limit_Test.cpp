#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
  float d1,t1,d2,t2;
  cin>>d1>>t1>>d2>>t2;
  float speed=d1/t1;
  float speed1=d2/t2;
  if(speed>speed1){
    cout<<"Alice"<<endl;
  }else if(speed1>speed){
    cout<<"Bob"<<endl;
  }else if(speed==speed1){
    cout<<"Equal"<<endl;
  }

}
}
