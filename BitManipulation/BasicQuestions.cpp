/*
Problem Statement : Given an integer n, return an array ans of length n + 1 such that
for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Input Format
Integer: Only Integers

Output Format
Print the required answer
Constraints
0 <= n <= 10^5
Example
Sample Input 1
2

Sample Output 1
[0,1,1]

*/

#include<bits/stdc++.h>
using namespace std;

// Function to count the number of 1's in a decimal number
int countOnes(int num) {
    int ans = 0;
    while(num > 0) {
        int d = num % 10;
        if(d == 1) {
            ans++;
        }
        num = num / 10;
    }
    return ans;
}

// Function to convert decimal to binary
int toBinary(int n) {
    if(n == 0) {
        return 0;
    }

    int binary = 0;
    int place = 1;
    while(n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n = n / 2;
        place = place * 10;
    }
    return binary;
}

// Function to count the number of 1's in binary representation of numbers from 0 to n
vector<int> arrayOfOnes(int n) {
    vector<int> ans;
    for(int i = 0; i <= n; i++) {
        int binary = toBinary(i);
        int c = countOnes(binary);
        ans.push_back(c);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = arrayOfOnes(n);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
