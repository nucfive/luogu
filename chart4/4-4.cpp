/*************************************************************************
	> File Name: 4-4.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/27 18:42:53 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define MAX_N 100
int main() {
    int n;
    int a[MAX_N + 5] = {0};
    int mark[MAX_N + 5] = {0};
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; --i) {
        for(int j = i - 1; j >= 0; --j) {
            if(j < 0) {
                mark[0] = 0;
            }
            if(a[i] > a[j]) {
                mark[i]++;
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        cout << mark[i] << " ";
    }
    cout << endl;
    return 0;
}
