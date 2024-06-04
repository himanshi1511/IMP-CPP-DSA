/*
Hello World
olleH dlroW


Hello World 
World Hello
*/

#include<bits/stdc++.h>
using namespace std;

string reversePositionOfEachWord(string str){
    stack<string> words;
    string word ;
    int n = str.length();


    for(int i=0 ; i < n ; i++){
        if(str[i] == ' '){
            continue;
        }

        while(i < n && str[i] != ' '){
            word += str[i];
            ++i;
        }

        if(!word.empty()){
            words.push(word);
            word.clear();
        }
    }


    string result;
    while(!words.empty()){
        result += words.top();
        words.pop();
        if(!words.empty()){
            result += " ";
        }
    }
    return result;
}

void reverseWord(string str){
    stack<char>st;

    for(int i=0 ; i<str.length() ; i++){
        if(str[i] != ' ' ){
            st.push(str[i]);
        }
        else{
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            cout <<" ";
        }
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}

int main(){
    string str;
    getline(cin , str);

    reverseWord(str);

    cout <<endl;
    string ans = reversePositionOfEachWord(str);
    cout <<ans<<endl;


}