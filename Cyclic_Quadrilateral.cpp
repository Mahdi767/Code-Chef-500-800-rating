#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int angle1=a+c;
  int angle2=b+d;
  if(angle1==180 || angle2 ==180)
  cout<<"YES"<<endl;
  else cout<<"NO"<<endl;  
}
}
