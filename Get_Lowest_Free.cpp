#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int x,y,z;
   cin>>x>>y>>z;
    if(x==y && y==z){
        cout<<x+y<<endl;
}else if(x<y && x<z){
        cout<<y+z<<endl;
    }else if(y<x && y<z){
cout<<x+z<<endl;
    }else if(z<x && z<y){
        cout<<x+y<<endl;
    }else if( x==y && x !=z && y != z){
        cout<<x+z<<endl;
    }else if( y==z && y !=x && z !=x){
        cout<<x+z<<endl;
    }else if( z==x && z !=y && x != y){
        cout<<y+z<<endl;
    }}
}
