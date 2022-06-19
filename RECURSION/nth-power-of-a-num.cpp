
/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  20.06.2022 00:53:01
**/


/*
    we have to find power of given num i.e: Power(x, n); 
     - using loop, iterations and functions - but it is not allowed in interviews :p

     Trying to solve it using Recursion
*/


#include <bits/stdc++.h>
using namespace std;

int recursive_pow(int n, int power){

    if(power == 0){
        return 1;
    }

    return n * recursive_pow(n, power - 1);
}

int main (){
    int n, power;
    cin >> n >> power;
    cout << recursive_pow(n, power); 
    return 0;    
}
