
/**
 *    author:   abhijayrajvansh
 *    created:  31.08.2021 05:57:12
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'
#define trav(a, x) for(auto a : x)

set<string> uniqueSubset;

void solve(string in, string op){
    if(in.size() == 0){
        uniqueSubset.insert(op);
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
    trav(a, uniqueSubset){
        cout << a << " ";
    }
    return 0;
}