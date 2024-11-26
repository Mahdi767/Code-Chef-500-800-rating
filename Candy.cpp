/**
 *    author:  Mahdi Hasan
 *    created: 2024-10-14 09:36:01
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt =0;
    int T;

    cin >> T;
    while (T--) {
       int x,y;
       cin>>x>>y;
       int initial_y = y; 
       if(x<y){
        cout<<y<<endl;
       }
else if(x>y){
    while(y<x){
        y+=initial_y;
       
    }
    if(x==y){
        cout<<y<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
    }
    return 0;
}