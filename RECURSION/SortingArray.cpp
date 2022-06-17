/**
 *    author:  abhijayrajvansh
 *    created: 20.08.2021  05:55:34
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

void insert(int last_value, vector<int>& arr){
    if(arr.size() == 0 || last_value >= arr[arr.size() - 1]){
        arr.push_back(last_value);
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    insert(last_value, arr);
    arr.push_back(temp);
}

void sortVector(vector<int>& arr){
    if(arr.size() == 1){
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortVector(arr);
    insert(temp, arr);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {5, 4, 3, 2, 3, 0, 1, -1};
    sortVector(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " " ;
    }
    return 0;
}