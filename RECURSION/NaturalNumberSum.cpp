/**
 *    author:  abhijayrajvansh
 *    created: 20.08.2021  02:11:28
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'
/*
sum of n = 1 + 2 + 3 + ... + (n - 1) + n
sum of n = sum(n - 1) + n
*/
int sum (int n){
    if(n == 1){
        return 1;
    }
    return sum(n - 1) + n;
}
// recursion is fucking magic !!! 
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << sum (n);
    return 0;
}