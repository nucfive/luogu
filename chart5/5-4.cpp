/*************************************************************************
	> File Name: 5-4.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 五 11/ 2 21:07:18 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    char s[25];
    scanf("%s", s);
    int len = strlen(s);
    int flag1 = 0,flag2 = 0,  mark = 0, zero = 0;
    for(int i = 0; i < len; ++i) {
        if(s[i] == '0') {
            zero += 1;
        }
    }

    for(int i = 0; i < len; ++i) {
        if(zero + 2 < len) {
            if(s[i] == '.') {
                flag1 = 0;
                flag2 = 0;
                mark = i;
                break;
            } else if(s[i] == '%') {
                flag1 = 1;
                flag2 = 1;
                mark = i;
                break;
            } else if(s[i] == '/') {
                flag1 = 2;
                flag2 = 2;
                mark = i;
                break;
            } else {
                flag1 = 3;
                flag2 = 3;
            }
        } else if(zero + 2 == len) {
            flag2 = 100;
        }
    }
    cout << zero << " " << len << endl;
    switch(flag1 + flag2) {
        case 0 : {
            for(int i = 0; i < mark; ++i) {
                if(s[mark - i - 1] == '0') continue;
                cout << s[mark - i - 1];
            }  
            cout << s[mark];
            for(int i = 0; i < mark; ++i) {
                if(s[len - i - 1] == '0')continue;
                cout << s[len - i - 1];
            }
            break;
        } 
        case 2 : {
            for(int i = 0; i < mark; ++i) {
                if(s[mark - 1 - i] == '0') continue;
                cout << s[mark - i - 1];
            } 
            cout << s[mark];
            break;
        }
        case 4 : {
            for(int i = 0; i < mark; ++i) {
                if(s[mark - 1 - i] == '0') continue;
                cout << s[mark - i - 1];
            }
            cout << s[mark];
            for(int i = 0; i < mark; ++i) {
                if(s[len - i - 1] == '0') continue;
                cout << s[len - i];
            }
            break;
        }
        case 6 : {
            for(int i = 0; i < len; ++i) {
                cout << s[len - i - 1];
            }
            break;
        }
        case 100 : cout << "0.0"; break;
        case 101 : cout << "0.0%";break;
        case 102 : cout << "0/0";break;
        default: break;
    }
    return 0 ;
}
