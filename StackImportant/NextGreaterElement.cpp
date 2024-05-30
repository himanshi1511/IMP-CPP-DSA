/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/


#include<bits/stdc++.h>
using namespace std;

int findIndex(int num,vector<int>& nums2){
    int ans = -1;
    for(int i=0 ; i<nums2.size() ; i++){
        if(num == nums2[i]){
            ans = i;
        }
    }
    return ans;
}
vector<int> nextGreater(vector<int>& nums1 ,vector<int>& nums2){
    //first we have to find the index of each ele in nums2 of nums1

    vector<int> ans;
    for(int i=0 ; i<nums1.size() ; i++){
        int idx = findIndex(nums1[i] , nums2);
        int aa = -1;
        for(int j=idx ; j<nums2.size() ;j++){
            if(nums2[j] > nums1[i]){
                aa = nums2[j];
                break;
            }
        }
        ans.push_back(aa);
    }
    return ans;
}

int main(){
    int n1 ;
    cin >> n1;
    vector<int> nums1;
    for(int i=0 ; i<n1 ; i++){
        cin >> nums1[i];
    }
    int n2;
    cin >> n2;
    vector<int> nums2;
    for(int i=0 ; i<n2 ; i++){
        cin >> nums2[i];
    }

    vector<int> ans = nextGreater(nums1 , nums2);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}