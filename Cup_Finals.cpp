#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
 int x,y,z;
 cin>>x>>y>>z;
 int interesting1=x-y;
 int interesting2=y-x; 
 if(interesting1>=0 && interesting1<=z || interesting2>=0 && interesting2<=z){
    cout<<"YES"<<endl;
 } else{
    cout<<"NO"<<endl;
 } 
}
}
