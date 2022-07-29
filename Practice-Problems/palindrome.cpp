/**
 *    author:   abhijayrajvansh
 *    created:  31.08.2021 02:32:51
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

bool isPalindrome(string& s, int start, int end){
    if(start >= end){
        return true;
    }
    return (s[start] == s[end] && isPalindrome(s, start + 1, end - 1));
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int start = 0, end = s.size() - 1;
    if(isPalindrome(s, start, end)){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
    return 0;

}