/**
 *    author:  Mahdi Hasan
 *    created: 2024-10-13 10:20:56
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int T;
    cin >> T;
    while (T--) {
           int cnt =0;
    int x;
    cin>>x;
       if(x==50){
        cout<<"0"<<endl;
       } else if(x>=50){
while(x<50){
    x=x-3;
}
while(x>=50){
    x+=2;
    cnt++;
}
cout<<cnt<<endl;
    //    }
    //    else if(x<50){

      }
    }
    return 0;
}