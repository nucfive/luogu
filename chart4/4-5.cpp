/*************************************************************************
	> File Name: 4-5.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/27 19:00:39 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define MAX 100
int a[MAX + 5] = {0};
int mark[MAX + 5] = {0};
int main() {
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mark[i] = 1; // 标记
    }
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                if(a[i] + a[j] == a[k] && mark[k] != 0) {
                    ans += 1;
                    mark[k] = 0;
                }
            }
        }
    }    
    cout << ans  << endl;
    return 0;
}
