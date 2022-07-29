/**
 *    author:   abhijayrajvansh
 *    created:  31.08.2021 05:27:44
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

vector<string> subset;
// global vector to store :p

void solve(string in, string op){
    if(in.size() == 0){
        subset.push_back(op);
        // cout << op << " ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(in[0]);
    in.erase(in.begin() + 0);
    solve(in, op1);
    solve(in, op2);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, in, op;
    cin >> s;
    in = s;
    op = "";
    solve(in, op);
    for(int i = 1; i < subset.size(); i++){
        cout << subset[i] << " ";
    }
    cout << nl;
    cout << "there are " << subset.size() << " possible subsets including an empty subset" << nl;
    return 0;
}