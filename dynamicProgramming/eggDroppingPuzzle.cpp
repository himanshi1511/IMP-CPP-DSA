/*
Problem Statement : Given a certain number of floors and eggs, find the minimum number of attempts needed to determine the critical floor from which an egg breaks when dropped. You are allowed to break at most k eggs.

Input Format
The input contains two integers separated by space: N denoting the number of floors and K denoting the number of eggs.

Output Format
Print an integer representing the minimum number of attempts required to find the critical floor.

Constraints :  1 ≤ N, K ≤ 100

Example
Sample Input 1
6 2

Sample Output 1
3

Sample Input 2
5 5

Sample Output 2
3

Explanation:
For the sample input 1, with 2 eggs and 6 floors, the minimum number of attempts needed to find the critical floor is 3. One approach to solve this is by dropping the eggs from the 3rd floor, then the 2nd floor if it doesn't break, and finally the 1st floor if needed.

*/


#include<bits/stdc++.h>
using namespace std;

int minAttempts(int n , int k){
    
}

int main(){
    int floor, eggs;
    cin>> floor >> eggs;

    int ans = minAttempts(floor ,eggs);
    cout<<ans<<endl;
}