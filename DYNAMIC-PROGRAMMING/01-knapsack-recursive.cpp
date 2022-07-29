/**
 *    author:   abhijayrajvansh
 *    created:  29.07.2022 21:34:20
**/
#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

/*
            choice diagram:-
                    wi
                 /    \
    (wi <= capacity)    (wi > capacity) - > exclude
   /              \
include  (max)   exclude
*/

int dp[100][100]; // dp[n][m] -> n = maximum constraints, m = maximum constraints

int knapsack(vector<int64_t> &wt, vector<int64_t> &val,  int capacity, int n){

    // Base Condition
    if(n == 0 || capacity == 0){
        return 0;
    }

    //Before every choice
    if(dp[n][capacity] != -1){
        return dp[n][capacity];
    }

    // Choice Diagram
    int include = val[n - 1] + knapsack(wt, val, capacity - wt[n - 1], n - 1);
    int exclude = knapsack(wt, val, capacity, n - 1);

    if(wt[n - 1] <= capacity){
        return dp[n][capacity] = max(include, exclude);
    }
    else{
        return dp[n][capacity] = exclude;
    }
}

int main (){
    vector<int64_t> wt = {10, 20, 30};
    vector<int64_t> val = {60, 100, 120};
    int capacity = 50;

    int n = wt.size();
    // after initializing dp array:
    memset(dp, -1, sizeof(dp)); // Filling all values dp[n][m] with -1

    cout << knapsack(wt, val, capacity, n) << '\n';
    return 0;    
}