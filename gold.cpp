#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
    int cnt=0;
    int x,y;
    cin>>x>>y;
    for(int i =1;i<=x;i++){
y+=i;
cnt++;
if(y==x || y>x)

break;

    }
    cout<<cnt<<endl;
}
}
