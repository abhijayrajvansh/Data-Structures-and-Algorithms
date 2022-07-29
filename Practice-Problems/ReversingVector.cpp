/**
 *    author:  abhijayrajvansh
 *    created: 21.08.2021  02:42:18
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

void insert(vector<int>& v, int first_value){
    if(v.size() == 0){
        v.push_back(first_value);
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    insert(v, first_value);
    v.push_back(temp);
    return;
}

void reverse(vector<int>& v){
    if(v.size() == 1){
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    reverse(v);
    insert(v, temp);
    return;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {1, 2, 3, 4, 5};
    reverse(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}