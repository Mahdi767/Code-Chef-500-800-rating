#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
 int x,y,z;
 cin>>x>>y>>z;
 if(x<y && x>z){
    cout<<x<<endl;
 }
 else if(y<x && y>z){
    cout<<y<<endl;
 }
 else if(z<x && z>y){
    cout<<z<<endl;
 }else if( x==y==z){
   cout<<x<<endl;
 }
}
}
