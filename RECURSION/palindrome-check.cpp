/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  21.06.2022 02:25:06
**/

/*
 To check the string is palindrome or not using recursion...
*/


#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int l, int r){
    
    if(l >= r) return true;

    return (s[l] == s[r]) && check(s, l+1, r - 1);
}

int main (){
    string s;
    cin >> s;
    cout << (check(s, 0, s.size() - 1) == 1 ? "Palindrome!" : "Not a Palindrome") << '\n';
    return 0;    
}
