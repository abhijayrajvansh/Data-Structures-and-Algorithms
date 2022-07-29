/**
 *    author:   abhijayrajvansh
 *    created:  31.08.2021 07:28:15
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

set<string> ans;

void solve (string in, string op){
    string sp = " "; // space
    if(in.size() == 0){
        ans.insert(op);
        // cout << op << " ";
        return ;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(sp[0]); 
    // op1 += " ";
    op1.push_back(in[0]);
    //op2 += " ";
    op2.push_back(in[0]);
    in.erase(in.begin() + 0);
    solve(in , op1);
    solve(in, op2);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string in = s, op = "";
    op.push_back(in[0]);
    in.erase(in.begin() + 0);
    solve(in, op);
    for(auto a : ans){
        cout << a << nl;
    }
    return 0;
}