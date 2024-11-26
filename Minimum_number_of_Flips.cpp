#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
    int sum =0;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
sum+=a[i];
  }  
 int k= (sum/2);
 if(sum==0){
    cout<<"0"<<endl;
 }
  else if(sum%2==0 && sum>0){
  
   cout<<k<<endl;
  }else if(sum % 2==0 && sum<0){
    cout<<k*(-1)<<endl;
  }
  else if(sum != 0){
    cout<<"-1"<<endl;
  }
}
}
