/**
 *    author:  abhijayrajvansh
 *    created: 19.08.2021  06:47:39
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

/*
factorial 5 = 5! => 1 x 2 x 3 x 4 x 5
factorial 6 = 6! = > 6 x 5 x 4 x 3 x 2 x 1
--------------------------------------
or... 6! = 6 X 5!
i.e, fact(n) = n * fact (n - 1)
--------------------------------------
*/

int fact(int n){
    if(n == 1){
        return n;
    }
    return n * fact(n - 1);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << fact(n);
    return 0;
}