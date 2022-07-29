/**
 *    author:   abhijayrajvansh
 *    created:  01.09.2021 09:54:16
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

void solve(string in , string op, set<string>& ans){
    if(in.size() == 0){
        // cout << op << " " ;
        ans.insert(op);
        return;
    }
    if(isalpha(in[0])){
        string op1 = op, op2 = op;
        op1.push_back(tolower(in[0]));
        op2.push_back(toupper(in[0]));
        in.erase(in.begin() + 0);
        solve(in, op1, ans);
        solve(in, op2, ans);
    }
    else{
        string op1 = op;
        op1.push_back(in[0]);
        in.erase(in.begin() + 0);
        solve(in, op1, ans);
    }
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string in = s, op = "";
    set<string> ans;
    solve(in, op, ans);
    for(auto a: ans){
        cout << a << " ";
    }
    return 0;
}