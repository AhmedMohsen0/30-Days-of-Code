#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double m;
    int t, x;
    cin >> m >> t >> x;
    double ans = m + (t*m)/100.0 + (x*m)/100.0;
    cout << "The final price of the meal is $"<< (int)round(ans) << ".\n";
    return 0;
}
