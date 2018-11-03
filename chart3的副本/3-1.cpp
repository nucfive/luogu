/*************************************************************************
	> File Name: 3-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  4/18 17:59:13 2018
 ************************************************************************/
#include <iostream>
#include <algorithm>
using std::endl;
using std::cout;
using std::cin;
using std::next_permutation;

int main() {
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do{
        int x = a[0] * 100 + a[1] * 10 + a[2];
        int y = a[3] * 100 + a[4] * 10 + a[5];
        int z = a[6] * 100 + a[7] * 10 + a[8];
        if((2 * x == y ) && (3 * y == 2 * z) && (3 * x == z)) {
            cout << x << " " << y << " " << z << endl;
        }
    }while(next_permutation(a, a + 9));
    return 0;
}


















