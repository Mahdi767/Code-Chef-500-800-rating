#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0;i<n;i++){
    cin>>arr[i];
   } 
   int k;
   cin>>k;
   int p=arr[k-1];

   sort(arr,arr+n);
   for(int i =0;i<n;i++){
   if(arr[i]==arr[k-1]){
    cout<<i+1<<endl;
   }
   }
}
}
