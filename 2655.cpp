#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    float x = (b / a) * -1;

    cout << fixed;
    cout.precision(4);
    cout << x;

    return 0;
}