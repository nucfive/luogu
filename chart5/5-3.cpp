/*************************************************************************
	> File Name: 5-3.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 三 10/31 20:21:37 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char a[15] = {0};
    char b[1000005] = {0};
    int ans = 0;
    int ans2 = -1;
    int num = 0;
    cin >> a;
    getchar();
    for (int i = 0; a[i]; i++) {
        if (a[i] < 'a') a[i] += 32;
    }
    gets(b);
    for (int i = 0; b[i]; i++) {
        if (b[i] < 'a' && b[i] != ' ') b[i] += 32;
    }
    for (int i = 0; b[i]; i++) {
        int temp = i;
        if (b[i] == ' ') continue;
        int flag = 0;
        for (int j = 0; a[j]; j++) {
            if (a[j] != b[i]) {
                flag = 1;
                break;
            }
            i++;
        }
        if (!flag && (b[i] == 0 || b[i] == ' ')) {
            if (ans2 == -1) ans2 = temp;
            ans++;
        } else {
            while (b[i] != ' ' && b[i] != 0) i++;
        }
    }
    
    if (ans2 == -1) {
        cout << -1 << endl;
    } else {
        cout << ans << " " << ans2 <<endl;
    }
    return 0;
}