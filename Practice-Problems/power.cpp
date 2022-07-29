/**
*    author:  abhijayrajvansh
*    created: 12.08.2021  01:20:38
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"


int power (int x, int n){
    if(n == 0) return 1;
    return (x * power(x, n - 1));
}

int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    cin >>  x >> n;
    cout << power(x, n);
    return 0;
}