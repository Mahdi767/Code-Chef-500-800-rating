#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
        cin >> n;

    int arr[n];


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxElement = arr[0];  
    int maxIndex = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i; 
        }
    }


    cout << maxIndex<< endl;

}}