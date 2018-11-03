/*************************************************************************
	> File Name: 5-1.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 三 10/31 15:28:10 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    char str[13] = {0}; // 字符数组来表示字符串
    int sum = 0, cnt = 1;;
    for(int i = 0; i < 13; ++i) {
        cin >> str[i]; 
    }
    for(int i = 0; i < 11; ++i) {
        if(str[i] == '-') continue;
        sum += (str[i] - '0') * cnt;
        cnt += 1;
    }
    
    if(sum % 11 == 10) {
        if(str[12] == 'X') {
            cout << "Right";
        } else {
            str[12] = 'X';
            for(int i = 0; i < 13; ++i) {
                cout << str[i];
            }
        }
    } else {
        if((sum % 11) == (str[12] - '0')) {
            cout << "Right";
        } else {
            str[12] = (sum % 11) + '0';
            for(int i = 0; i < 13; ++i) {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}
