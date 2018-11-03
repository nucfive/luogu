/*************************************************************************
	> File Name: 4-2.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/27 19:00:21 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define M 100
int main() {
    int l, n, cnt = 0;
    cin >> l >> n;
    int a[M][2] = {0};
    int mark[10000 + 5] = {0};
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <= l; ++i) {
        for(int j = 0; j < n; ++j) {
            if((i >= a[j][0]) && (i <= a[j][1])) {
                mark[i] = 1;
            }
        } 
    }
    for(int i = 0; i <= l; ++i) {
        if(mark[i]) cnt += 1;
    }
    cout << l + 1 - cnt << endl;
    return 0;
}
