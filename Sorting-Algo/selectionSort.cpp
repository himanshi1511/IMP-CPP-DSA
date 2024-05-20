#include<iostream>
using namespace std;
void selection(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        int min_idx = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[i],arr[min_idx]);
        }
        for(int k=0 ; k<n ;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    selection(arr , n);
}