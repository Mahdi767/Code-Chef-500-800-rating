#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==1)return true;
    for(int i=2;i<=sqrt(n);i++){
if(n%i==0) return false;
else return true;
    }
}

int main() {
int T;
cin>>T;
while(T--){
    int n;
    cin>>n;
 if(prime(n)) cout<<"yes"<<endl;
 else cout<<"no"<<endl;   
}
}
