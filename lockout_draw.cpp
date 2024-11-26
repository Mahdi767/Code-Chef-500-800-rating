#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
    int x,y,z;
    cin>>x>>y>>z;
int arr[] = {x, y, z};
sort(arr,arr+3);
for(int i =0;i<=2;i++){
    if(arr[0]+arr[1] == arr[2]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    break;
}

}}
