#include<bits/stdc++.h>
using namespace std;


int bruteForce(string txt , string pat){
    int n = txt.length();
    int m = pat.length();

    for(int i=0 ; i<=n - m ; i++){
        int j = 0;
        while(j < m && txt[i+j] == pat[j]){
            j++;
        }
        if(j == m){
            return i;
        }

    }
    return -1;
}

int main(){
    string txt , pat;
    getline(cin , txt);

    cin>>pat;

    int ans = bruteForce(txt , pat);

    cout<<ans<<endl;

    return 0;

}