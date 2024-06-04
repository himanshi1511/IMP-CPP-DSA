#include<bits/stdc++.h>
using namespace std;
void deletehelper(stack<int>& st , int size , int current){
    if(current == size/2){
        st.pop();
        return;
    }

    int x = st.top();
    st.pop();
    current += 1;
    

    deletehelper(st , size , current);

    st.push(x);

}
void deleteMid(stack<int>&st , int size){
    deletehelper(st , size , 0);
}

int main(){
    stack<int> st;
    int c;
    while( cin >> c && c != -1){
        st.push(c);
    }
    int n = st.size();


    deleteMid(st , n);
    while(!st.empty()){
        int c = st.top();
        st.pop();
        cout << c <<" ";

    }

}
