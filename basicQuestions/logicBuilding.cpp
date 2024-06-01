#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ans = 0;
    while( n> 0){
        int r = n%10;
        ans = ans*10 + r;
        n = n/10;
    }
    return ans;
}
bool ispalindrome(int n){
    int cmp = reverse(n);
    if(cmp == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    bool isPal = ispalindrome(n);
    if(isPal){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}