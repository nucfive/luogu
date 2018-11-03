/*************************************************************************
	> File Name: 4-6.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/27 19:00:57 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define MAX_N 10000000
int a[MAX_N + 5] = {0};
int main() {
    int n, max = -1, current_max = 1;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i + 1 < n; ++i) {
        if(a[i] < a[i + 1]) {
            current_max += 1;
        } else {
            if(current_max > max) {
                max = current_max;
            }
            current_max = 1;
        }
    }
    cout << max << endl;
    return 0;
}
