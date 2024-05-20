//print prime factors in increasing order

#include<bits/stdc++.h>
using namespace std;

vector<int> primeIncreasing(int n){
    vector<int> ans;

    while(n%2 == 0){
        ans.push_back(2);
        n = n/2;
    }
    for(int i=3 ; i*i<=n ; i++){
        while(n % i == 0){
            ans.push_back(i);
            n = n/i;
        }
    }

    if(n > 2){
        ans.push_back(n);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> ans = primeIncreasing(n);
    for(int i =0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}