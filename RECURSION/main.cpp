/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  21.06.2022 03:00:30
**/
#include <bits/stdc++.h>
using namespace std;

void rever(vector<int>& a, int i, int j){
    if(i >= j) return;
    swap(a[i], a[j]);
    rever(a, ++i, --j);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {1, 2, 3, 4, 5, 6};
    int n = a.size();
    int i = 0, j = n - 1;

    rever(a, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;    
}
