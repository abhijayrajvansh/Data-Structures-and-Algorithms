/**
*    author:  abhijayrajvansh
*    created: 12.08.2021  02:23:48
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return (fibo(n - 1) + fibo(n - 2));
}

int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << fibo(n);
    return 0;
}