#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
    int cnt=0;
    int cnt1=0;
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]=="START38"){
cnt++;
        }else if(v[i]=="LTIME108"){
            cnt1++;
        }

    }
    cout<<cnt<<" "<<cnt1<<endl;
}
}
