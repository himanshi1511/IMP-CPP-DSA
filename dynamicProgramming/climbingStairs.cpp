/*
You are climbing a staircase. It takes n steps to reach the top.Each time you can 
either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/


#include<bits/stdc++.h>
using namespace std;

int ways(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    vector<int> dp(n+1);
    dp[0] = dp[1] = 1;

    for(int i=2 ; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;

    int ans = ways(n);
    cout<<ans<<endl;

}