/*************************************************************************
	> File Name: 5-2.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 五 11/ 2 16:57:44 2018
    > Description: 
    >              
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define MAX_N 100000000
int prime[MAX_N + 5] = {0};

void isPrime() {
    prime[0] = prime[1] = 1;
    for(int i = 2; i * i <= MAX_N; ++i) {
        if(prime[i] == 0) {
            for(int j = i * 2; i * j <= MAX_N; ++j) {
                prime[i * j] = 1;
            }
        }
    }
    return ;
}

bool Palindrome(long long n) {
    long long temp = n;
    long long  rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (temp == rev);
}  

int main() {
    isPrime();
    long long  a, b;
    cin >> a >> b;
    for(long long  i = a; i <= b; ++i) {
        if( (Palindrome(i)) && (prime[i] == 0)) {
            cout << i << endl;
        }
    }
    return 0;
}
