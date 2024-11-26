#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int x,y,z;
   cin>>x>>y>>z;
if(x<y&& x<z){
    cout<<"Draw"<<endl;
}else if(y<x && y<z){
    cout<<"Bob"<<endl;
}else if(z<x && z<y){
    cout<<"Alice"<<endl;
}
}
}
