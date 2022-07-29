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

int knapsack(vector<int64_t> &wt, vector<int64_t> &val,  int capacity, int n){

    // Base Condition
    if(n == 0 || capacity == 0){
        return 0;
    }

    // Choice Diagram
    int include = val[n - 1] + knapsack(wt, val, capacity - wt[n - 1], n - 1);
    int exclude = knapsack(wt, val, capacity, n - 1);

    if(wt[n - 1] <= capacity){
        return max(include, exclude);
    }
    else{
        return exclude;
    }
}

int main (){
    vector<int64_t> wt = {10, 20, 30};
    vector<int64_t> val = {60, 100, 120};
    int capacity = 50;

    int n = wt.size();

    cout << knapsack(wt, val, capacity, n) << '\n';

    cerr << fixed << setprecision(2); cerr << "\nExecution Time: " << (float)clock() / CLOCKS_PER_SEC << " secs" << '\n'; 
    return 0;    
}