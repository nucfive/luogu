/**********************************************************************
	> File Name: 2-4.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  4/18 17:15:27 2018
**********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
typedef struct Pen {
    int nums;
    int price;
} Pen;
int main() {
    int n;
    Pen p[3];
    int ex[3] = {0};
    int min = 1e9;
    cin >> n;
    for(int i = 0; i < 3; ++i) {
        cin >> p[i].nums >> p[i].price;
        ex[i] = ceil((double)n / p[i].nums) * p[i].price;
    }
    for(int i = 0; i < 3; ++i) {
        if(ex[i] < min) {
            min = ex[i];
        }
    }
    cout << min << endl;
    return 0;
}

