/*************************************************************************
	> File Name: 3-2.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/20 11:25:04 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using std::string;
using std::cout;
using std::cin;
using std::endl;
double  f(int n) {
    if(n == 1) {
        return (double)1;
    } else {
        return 0.5772156649 + log(n + 1);
    }
}


int main() {
    int k,n=0;
    cin >> k;
    //for(double Sn = 0; Sn <= k; n++, Sn += 1.0 / n); //做法一 模拟
    while(n) {
        if(f(n) > k) break;
        n += 1;
    }
    cout << n << endl;
    return 0;
}
