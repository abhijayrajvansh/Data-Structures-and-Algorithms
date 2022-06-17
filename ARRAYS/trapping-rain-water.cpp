/*
Problem Statement: - Given height of n buildings, find out how many unit of water can be stored in between thoses building.
Consider width of each building to be 1 Unit.
*/
#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int max_rain_water(vector<int> &a){

    int n = a.size();
    int lmax = INT_MIN, rmax = INT_MIN, res = 0;

    for (int i = 1; i < n - 1; i++){
        for(int j = i - 1; j >= 0; j--){
            lmax = max(lmax, a[j]);
        }
        for(int j = i; j < n; j++){
            rmax = max(rmax, a[j]);
        }
        res += min(lmax, rmax) - a[i];

    }
    return res;
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> height_of_buildings = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << max_rain_water(height_of_buildings) << nl;
    
    return 0;    
}
