#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int n,x,p;
    cin>>n>>x>>p;
    int t1=x*3;
    int t2=(n-x)*-1;
if((t1+t2)>=p){
    cout<<"PASS"<<endl;
}else{
    cout<<"FAIL"<<endl;
}
}
}
