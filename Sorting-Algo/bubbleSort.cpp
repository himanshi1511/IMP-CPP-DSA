#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n; i++){
        int a ;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}