#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double m;
    int t,x;
    cin >> m >> t >> x;

    cout << "The final price of the meal is $" << round(m + (m*t)/100 + (m*x)/100) << "."<< endl;
    return 0;
}
