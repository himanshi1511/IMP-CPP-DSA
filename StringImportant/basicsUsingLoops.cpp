//find the character in a string with max freq

#include<bits/stdc++.h>
using namespace std;

char maxFreq(string str){
    unordered_map<char , int> mp;
    for(char c : str){
        mp[c]++;
    }
    char ans;
    int maxi = 0;
    for(auto& it : mp){
        if(it.second > maxi){
            maxi = it.second;
            ans = it.first;
        }
    }
    return ans;
}


int main(){
    string str;
    cin>>str;
    char ans = maxFreq(str);
    cout<<ans;
}