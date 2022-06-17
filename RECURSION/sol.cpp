/**
 *    author:   abhijayrajvansh
 *    created:  11.01.2022 23:50:55
**/
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n - 1);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}