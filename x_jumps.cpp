#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int x,y;
   cin>>x>>y;
   if(x==y){
    cout<<"1"<<endl;
}else
   if(y==1 && x>y){
    cout<<(x-y)+y<<endl;
   } else
   if(y>x){
    int k=y-x;
    cout<<x+k<<endl;
   }else
if(x%y==0){
    cout<<y<<endl;
}else if(x%y != 0){
    cout<<y+1<<endl;
} 
}
}
