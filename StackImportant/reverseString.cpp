#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    stack<int> st;
    for(char c : str){
        st.push(c);
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans << endl;
}