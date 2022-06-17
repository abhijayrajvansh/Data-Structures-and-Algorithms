/**
 *    author:   abhijayrajvansh
 *    created:  01.09.2021 09:20:09
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

set<string, greater<string>> ans; // decreasing order

void solve(string in, string op){
    if(in.size() == 0){
        // cout << op << " " ;
        ans.insert(op);
        return;
    }
    string op1 = op, op2 = op;
    op1.push_back(in[0]);
    op2.push_back(toupper(in[0]));
    // op2.push_back(in[0] - 32); // diff of 'a' and 'A'
    in.erase(in.begin() + 0);
    solve(in, op1);
    solve(in, op2);
}

int main (){
    ios_base::sync_with_stdio(false);e
    cin.tie(NULL);
    string s;
    cin >> s;
    string in = s, op = "";
    solve(in, op);
    for(auto a: ans){
        cout << a << " ";
    }
    cout << nl << "There are " << ans.size() << " permutations possible"; 
    return 0;
}