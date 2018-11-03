/*************************************************************************
	> File Name: 4-3.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/27 18:25:40 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define MAX_N 2000000
int a[MAX_N];
int main() {
    int n = 0;
    while(cin >> a[n]) {
        if(a[n] == 0) break;
        n += 1;
    }
    for(int i = n - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }
    return 0;
}
