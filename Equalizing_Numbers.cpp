#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int x,y;
    cin>>x>>y;
    if(x==y || x+1== y-1|| y+1==x-1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
}
