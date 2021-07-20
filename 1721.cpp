#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double result;
    double temp;
    temp = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    result = sqrt(temp);

    cout << fixed;
    cout.precision(2);
    cout << result;

    return 0;
}