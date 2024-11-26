#include <bits/stdc++.h>
using namespace std;
int main() {
int r,o,c;
cin>>r>>o>>c;
int per=20-o;
int per2=(per*6)*6;
int t= per2+c;
if(t>r)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
