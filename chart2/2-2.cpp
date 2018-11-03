/*************************************************************************
	> File Name: 2-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/17 20:41:00 2018
 ************************************************************************/

#include<iostream>
using std::endl;
using std::cout;
using std::cin;
int main() {
    int a[7] = {0}, b[7] = {0}, sum[7] = {0};
    int minInd = 10000;
    for(int i = 0; i < 7; ++i) {
        cin >> a[i] >> b[i];
        sum[i] = a[i] + b[i];
    }
    for(int i = 0; i < 7; ++i) {
        if(sum[i] > 8 && i < minInd) {
            minInd = i;
        }
    }
    cout << minInd + 1 << endl;
    return 0;
}






