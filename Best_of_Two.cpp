#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
       int arr[7];
 for(int i=1;i<=6;i++){
    cin>>arr[i];
 int max_value = max({arr[0], arr[1], arr[2]});
 int max_value2 = max({arr[3], arr[4], arr[5]});
 int second_max_value;
    if (max_value == arr[0]) {
        second_max_value = max(arr[1], arr[2]);
    } else if (max_value == arr[1]) {
        second_max_value = max(arr[0], arr[2]);
    } else if(max_value == arr[2]){
        second_max_value=max(arr[0],arr[1]);
    }
    int Alice = max_value +second_max_value;

    int second_max_value1;
    if (max_value2 == arr[3]) {
        second_max_value1 = max(arr[4], arr[5]);
    } else if (max_value2 == arr[4]) {
        second_max_value1 = max(arr[3], arr[5]);
    } else if(max_value2 == arr[5]){
        second_max_value1=max(arr[3],arr[4]);
    }
int Bob=max_value2+second_max_value1;
 if(Alice>Bob){
    cout<<"Alice"<<endl;
}else if(Bob>Alice){
    cout<<"Bob"<<endl;
}else{
    cout<<"Tie"<<endl;
}
 }


   }
}
