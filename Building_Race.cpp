#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
   float a,b,x,y;
   cin>>a>>b>>x>>y;
    float chef=a/x;
   float chefina=b/y;
    if(chef<chefina){
    cout<<"Chef"<<endl;
    }else if(chefina<chef){
        cout<<"Chefina"<<endl;
    }else cout<<"Both"<<endl;
}
}
