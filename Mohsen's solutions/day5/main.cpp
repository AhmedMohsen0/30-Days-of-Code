#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; cin >> t;
    while(t--){
        int n, a, b;
        cin >> a >> b >> n;
        int ans = a;
        for(int i = 0; i < n; i++){
            ans += (int)pow(2, i)*b;
            cout << ans << " \n"[i==n-1];
        }
    }
    return 0;
}
