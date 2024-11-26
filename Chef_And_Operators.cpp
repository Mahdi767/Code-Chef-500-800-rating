#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int x,y;
   cin>>x>>y;
   if(x>y){
    cout<<">"<<endl;
   }else if(x<y){
    cout<<"<"<<endl;
   }else if(x==y){
    cout<<"="<<endl;
   }
}
}
