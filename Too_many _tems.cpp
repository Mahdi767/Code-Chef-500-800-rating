#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
  int n;
  cin>>n;
  if(n%10==0)
    cout<<n/10<<endl;
  else cout<<n/10+1<<endl;
}
}
