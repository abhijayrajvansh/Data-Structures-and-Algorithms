/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
``````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  21.06.2022 02:47:40
**/

/*
reverse and array using two pointer technique recursively
*/

#include <bits/stdc++.h>
using namespace std;

void recursive_reverse(vector<int> &a, int start, int end){

    if(start >= end) return; // start >= end {Collision..}
    swap(a[start], a[end]);

    recursive_reverse(a, start + 1, end - 1);
}

int main (){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    recursive_reverse(arr, 0, arr.size() - 1);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;    
}
