/**
 *    author:  abhijayrajvansh
 *    created: 19.08.2021  06:32:49
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

void print(int n){
    if(n == 1) {
        cout << n << " ";
        return;
    }
    print(n - 1);
    cout << n <<  " " ;
}

int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    print(n);
    return 0;
}