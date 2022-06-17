/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  16.06.2022 03:16:30
**/
#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> a){
    int res = a[0];
    
    for(int i = 0; i < a.size(); i++){
        res = max(res, a[i]);
    }

    return res;
}

int second_largest(vector<int> a){
    int n = a.size(), res = 0;
    int lar = largest(a);

    for(int i = 0; i < n; i++){
        if(a[i] == lar){
            continue;
        }
        res = max(res, a[i]);
    }

    return res;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {1, 2, 3, 4, 5, 6, 99, 99};
    cout << "Largest        : " << largest(a) << '\n';
    cout << "Second Largest : " << second_largest(a) << '\n';
    return 0;    
}
