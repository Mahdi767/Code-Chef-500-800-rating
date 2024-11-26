#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;

while(T--){
  int x,y;
  cin>>x>>y;
while(x<y){
    x*=2;
}

while(y<x){
    y*=2;
}
if(x==y){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
}
