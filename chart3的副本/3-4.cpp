/*************************************************************************
	> File Name: 3-4.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/20 16:07:21 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int total(int n, int x) {
    int cnt = 0;
    while(n) {
        if(n % 10 == x) cnt += 1;
        n /= 10;
    }
    return cnt;
}
int main() {
    int n, x;
    int ans = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i) {
        ans += total(i, x);
    }
    cout << ans << endl;
    return 0;
}
