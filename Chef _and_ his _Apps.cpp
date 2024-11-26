#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
 int s,x,y,z;
 cin>>s>>x>>y>>z;
   int e_mpty = s-(x+y);
   int one_app=e_mpty+x;
   int app_one=e_mpty+y;
   int two_app=e_mpty+(x+y);
   if(e_mpty>=z){
    cout<<"0"<<endl;
   }else if(one_app>= z || app_one>= z){
   cout<<"1"<<endl;
   }else if(two_app>= z){
   cout<<"2"<<endl;
   }
}
}

