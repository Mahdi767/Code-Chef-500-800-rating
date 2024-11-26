#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
 
    
    int h,x,y;
    cin>>h>>x>>y;
       
    if(h<=y){
        cout<<"1"<<endl;
    } if(h%x != 0){
       cout<<((h/x))<<endl;
    }else{
        cout<<(h/x)-1<<endl;
    }

    
}
}
