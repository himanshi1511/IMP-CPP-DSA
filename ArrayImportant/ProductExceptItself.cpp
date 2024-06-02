#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> nums , int n){
    vector<int> ans(n ,  1);
    int leftProd = 1;
    for(int i=1; i<n; i++){
        leftProd = leftProd * nums[i-1];
        ans[i] = ans[i] * leftProd;
    }

    int rightProd = 1;
    for(int i=n-2 ; i>=0 ; i--){
        rightProd = rightProd * nums[i+1];
        ans[i] = ans[i] * rightProd;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0 ; i<n;i++){
        int a;
        cin >>a;
        v.push_back(a);
    }

    vector<int> ans =fun(v , n);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}