#include<bits/stdc++.h>
using namespace std;

//kedanes algorithm

// int maxSumSubarr(vector<int>& arr , int n){
//     int maxSum = arr[0];
//     int currSum = arr[0] ;

//     for(int i=1 ; i<n ; i++){
//         currSum = max(currSum + arr[i] , arr[i]);
//         maxSum = max(maxSum, currSum);
//     }
//     return maxSum;

// }

int maxSubArraySum(vector<int>& a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0 ;i<n ; i++){
        int a;
        cin >>a;
        arr.push_back(a);
    }
    int ans = maxSubArraySum(arr , n);
    cout<<ans<<endl;
}