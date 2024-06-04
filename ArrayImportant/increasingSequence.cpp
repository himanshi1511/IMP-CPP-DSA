/*
A sequence a0, a1, ..., at - 1 is called increasing if ai - 1 < ai for each i: 0 < i < t.

You are given a sequence b0, b1, ..., bn - 1 and a positive integer d. In each move you may choose one element of the given sequence and add d to it. What is the least number of moves required to make the given sequence increasing?

Input
The first line of the input contains two integer numbers n and d (2 ≤ n ≤ 2000, 1 ≤ d ≤ 106). The second line contains space separated sequence b0, b1, ..., bn - 1 (1 ≤ bi ≤ 106).

Output
Output the minimal number of moves needed to make the sequence increasing.

Examples
input
4 2
1 3 3 2
output
3

*/

#include <bits/stdc++.h>
using namespace std;

int minMovesToMakeIncreasing(vector<int>& b, int d) {
    int n = b.size();
    int moves = 0;

    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            int neededIncrement = (b[i - 1] - b[i]) / d + 1;
            b[i] += neededIncrement * d;
            moves += neededIncrement;
        }
    }
    
    return moves;
}

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = minMovesToMakeIncreasing(b, d);
    cout << result << endl;

    return 0;
}
