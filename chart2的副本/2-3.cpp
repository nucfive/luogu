/*************************************************************************
	> File Name: 2-3.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/17 21:51:13 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int a[12] = {0};
	int mother = 0;
	int temp[12] = {0};
	int sum = 0;
	bool flag = false;
	for(int i = 0; i < 12; ++i) {
		cin >> a[i];
	}
	temp[0] = 300 - a[0];
	if(temp[0] >= 100) {
		mother += temp[0] - (temp[0] % 100);
	}
	for(int i = 1; i <= 11; ++i) {
		temp[i] = 300 + temp[i - 1] - a[i];
		if(temp[i] >= 100) {
			mother += temp[i] - (temp[i] % 100);
			temp[i] = temp[i] % 100;
		}
	}
	sum = mother + (int)mother * 0.2 + temp[11];
	for(int i = 0; i < 12; ++i) {
		if(temp[i] < 0) {
			cout << "-" << i + 1 << endl;
			return 0;
		}	
	}
	cout << sum << endl;
    return 0;
}












