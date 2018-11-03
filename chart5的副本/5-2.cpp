/*************************************************************************
	> File Name: 5-2.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 三 10/31 16:54:43 2018
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
    char u[10];
    char g[10];
    long long ans1 = 1;
    long long ans2 = 1;
    scanf("%s", u);
    scanf("%s", g);
    int len1 = strlen(u);
    int len2 = strlen(g);
    for(int i = 0; i < len1; ++i ) {
        ans1 *= u[i] - 64;
    }
    for(int i = 0; i < len2; ++i ) {
        ans2 *= g[i] - 64;
    }
    if((ans1 % 47) == (ans2 % 47)) {
        cout << "GO";
    } else {
        cout << "STAY";
    }
    return 0;
}
