/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *    author:   abhijayrajvansh (https://codeforces.com/profile/abhijayrajvansh)
 *    created:  21.06.2022 02:00:20
**/

/*
    we have to find power of given num i.e: Power(x, n);
     - using loop, iterations and functions - but it is not allowed in interviews :p

     Trying to solve it using Recursion
*/

#include <bits/stdc++.h> 
using namespace std;


int op_pow(int base, int power){
    if(power == 0){
        return 1;
    }
    int temp = op_pow(base, power / 2);

    if(power % 2 == 1){
        return temp * temp * base;
    }else{
        return temp * temp;
    }
}

int main (){
    int base, power;
    cin >> base >> power;
    cout <<  op_pow(base, power);
    return 0;
}