/*************************************************************************
	> File Name: 3-3.cpp
	> Author: 小学肄业
	> Mail: weirufeng@haizeix.com
	> Created Time: 六 10/20 16:00:25 2018
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
	unsigned long long int n, sum = 0;
	int x;
	cin >> x >> n;
	for(unsigned int i = 0; i < n; ++i) {
		if((x != 6) && (x != 7)) sum += 250;
		if(x == 7) x = 1;
		else x += 1;
	}
	cout << sum << endl;
    return 0;
}
