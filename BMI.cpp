#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;

while(T--){
    int x,y;
  cin>>x>>y;
  int sum =(x/(y*y));
if(sum<=18){
    cout<<"1"<<endl;
}else if(sum>=19 && sum<=24){
    cout<<"2"<<endl;
}else if(sum>=25 && sum<=29){
    cout<<"3"<<endl;
}else if(sum>=30){
    cout<<"4"<<endl;
}
}}
