// code to find the union of two arrays
//  n = 4 , m  = 5  -- arr1 = [1 , 2 , 3 ,4] arr2 = [1 , 3 , 4 ,5 ,6]
// ans = [1 ,2 ,3 , 4 , 5 , 6]

#include <bits/stdc++.h>
using namespace std;

// using sets
    vector<int> findUnionUsingSet(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        set<int> st;
        for(int i=0 ; i<n ; i++){
            st.insert(arr1[i]);
        }
        for(int i=0 ; i<m ; i++){
            st.insert(arr2[i]);
        }
        
        for(auto& s : st){
            ans.push_back(s);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] >= arr2[j])
        {
            if (ans.size() == 0 || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }

        else
        {
            if (ans.size() == 0 || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
    }

    while (i < n)
    {
        if (ans.size() == 0 || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        if (ans.size() == 0 || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}


int main(){
    int n , m;
    cin>> n>> m;
    int arr1[n] ;
    int arr2[m];

    for(int i=0 ; i<n ; i++){
        cin >> arr1[i];
    }
    for(int j=0 ; j<m ; j++){
        cin >> arr2[j];
    }

    vector<int> ans = findUnion(arr1 , arr2 , n , m);
    for(int i = 0 ; i< ans.size() ; i++){
        cout<< ans[i] << " ";
    }

}