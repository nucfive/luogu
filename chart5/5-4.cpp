/*************************************************************************
	> File Name: 5-4.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 五 11/ 2 21:07:18 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    char num[25] = {0};
    char ans[25] = {0};
    int flag = 0, flag1, length;
    scanf("%s", num);
    for (int i = 0; num[i]; i++) {
        switch (num[i]) {
            case '.' : flag = 1; flag1 = i; break;
            case '/' : flag = 2; flag1 = i; break;
            case '%' : flag = 3; flag1 = i; break;
        }
        length = i;
    }
    switch (flag) {
        case 0 : {
            for (int i = 0; num[i]; i++) {
                ans[length--] = num[i];
            }
            char *p = ans;
            while (*p == '0') p++;
            if (*p == 0) cout << "0" << endl;
            cout << p << endl;
            break;
        }
        case 1 : {
            int raw_flag = flag1;
            int raw_length = length;
            for (int i = 0; i < raw_flag; i++) {
                ans[--flag1] = num[i];
            }
            ans[raw_flag] = '.';
            flag = raw_flag;
            for (int i = raw_flag + 1; num[i]; i++) {
                ans[length--] = num[i];
            }
            int front = 0;
            while (ans[front] == '0') front++;
            if (ans[front] == '.') front--;
            int back = raw_length;
            while (ans[back] == '0') back --;
            if (ans[back] == '.') back ++;
            for (int i = front; i <= back; i++) {
                cout << ans[i];
            }
            cout << endl;
            break;
        }
        case 2 : {
            int raw_flag = flag1;
            for (int i = 0; i < raw_flag; i++) {
                ans[--flag1] = num[i];
            }
            ans[raw_flag] = '/';
            flag = raw_flag;
            while (num[length] == '0') length--;
            int raw_length = length;
            for (int i = raw_flag + 1; i <= raw_length; i++) {
                ans[length--] = num[i];
            }
            int front = 0;
            while (ans[front] == '0') front++;
            if (ans[front] == '/') front--;
            for (int i = front; i <= raw_length; i++) {
                cout << ans[i];
            }
            cout << endl;
            break;
        }
        case 3 : {
            int raw_flag = flag1;
            for (int i = 0; i < raw_flag; i++) {
                ans[--flag1] = num[i];
            }
            ans[raw_flag] = '%';
            int front = 0;
            while (ans[front] == '0') front++;
            if (ans[front] == '%') front--;
            for (int i = front; i <= length; i++) {
                cout << ans[i];
            }
            cout << endl;
            break;
        }
        
    }
    return 0;
}