#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;

while(T--){
    string cnt ="";
string string1,string2;
cin>>string1>>string2;
 for (int i = 0; i < string1.length() && i < string2.length(); i++) {
    if (string1[i] == string2[i]) {
       cnt+="G";
    }else{
      cnt+="B";
    }
}
cout<<cnt<<endl;


}}

