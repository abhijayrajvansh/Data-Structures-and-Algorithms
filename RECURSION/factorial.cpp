/**
*    author:  abhijayrajvansh
*    created: 11.08.2021  23:37:55
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"


int fact(int n){
    if(n == 0) return 1;
    return (n * fact(n - 1));
}
/*
using PMI:
solving for base case f(0) and f(1) is true..
then
assume f(k) is true
then 
prove for f(k + 1) with the help of f(k)
*/
int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << fact(n);
    return 0;
}
