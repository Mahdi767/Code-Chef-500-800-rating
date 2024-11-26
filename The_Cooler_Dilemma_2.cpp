#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int T;
cin>>T;
 
while(T--){
  int x,y;
  cin>>x>>y;
  if(y%x==0) {
    cout<<(y/x)-1<<endl;
  }else{
    cout<<(y/x)<<endl;
  }
}}
