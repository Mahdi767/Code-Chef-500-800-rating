#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
    int n,k;
    int cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        if((N+k)%7==0){
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
}
