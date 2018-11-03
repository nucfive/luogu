/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  4/18 16:35:47 2018
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 2000000
int mark[MAX_N] = {0};
void initPrime() {
    mark[0] = mark[1] = 1;
    for(int i = 2; i * i <= MAX_N; ++i) {
        if(mark[i] != 1) {
            for(int j = i; j <= MAX_N / i; ++j) {
                mark[j * i] = 1;
            }
        }
    }
    return ;
}

int main() {
    int sum = 0;
    initPrime();
    for(int i = 2; i < MAX_N; ++i) {
        if(mark[i] != 1) {
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}








