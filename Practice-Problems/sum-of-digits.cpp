/**
 *    author:   abhijayrajvansh
 *    created:  31.08.2021 03:00:13
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'
#define ll long long

ll sumOfDigits(ll n){
    if(n == 0){
        return 0;
    }
    return sumOfDigits(n / 10) + n % 10;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n; 
    int ans = sumOfDigits(n);
    cout << ans << nl;
    return 0;
}