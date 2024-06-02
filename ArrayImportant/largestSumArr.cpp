#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v){
    int n = v.size();
    
    int currSum = v[0];
    int maxSum = v[0];
    for(int i=1 ; i<n ; i++){
        currSum = max(currSum + v[i] , v[i]);
        maxSum = max(maxSum , currSum);
    }

    return maxSum;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }


    cout<<fun(v)<<endl;
}