/*************************************************************************
	> File Name: 4-1.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/20 19:32:35 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    int a[10] = {0};
    int h = 0, cnt = 0;
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    cin >> h;

    for(int i = 0; i < 10; ++i) {
        if(h >= a[i]) {
            cnt += 1;
        } else {
            if(h + 30 >= a[i]) {
                cnt += 1;
            } else {
                continue;
            }
        } 
    }
    cout << cnt << endl;
    return 0;
}
