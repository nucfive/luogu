/*************************************************************************
	> File Name: 5-3.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 三 10/31 20:21:37 2018
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
#define MAX_N 1000000
char  str[MAX_N + 5];
int main() {
    char target[15];
    scanf("%s", target);
    scanf("%[^\n]s", str);
    int len1 = strlen(target);
    int len2 = strlen(str);
    
    for(int i = 0; i < len1; ++i) {
        if((target[i] >= 'A') && (target[i] <= 'Z')) {
            target[i] += 32;
        }
    }

    for(int i = 0; i < len2; ++i) {
        if((str[i] >= 'A') && (str[i] <= 'Z')) {
            str[i] += 32;
        }
    }
    int n = 0;
    int cnt = 0;
    while(n < len2) {
        for(int i = 0; i < len1; ++i) {
            if(target[i] == str[i + n]) {
                if(i == len1 - 1) {
                    cnt += 1;
                }
            }
            break;
        }
        n += 1;
    }
    cout << cnt << endl;
    return 0;
}
