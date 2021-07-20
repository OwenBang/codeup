#include <iostream>
using namespace std;

void test(int a, int b)
{
    if (a % 2 == 1)
    {
        if (a <= b)
        {
            cout << a << "\t";
            a += 2;
            test(a, b);
        }
    }
    else
    {
        a += 1;
        if (a <= b)
        {
            cout << a << "\t";
            a += 2;
            test(a, b);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    test(a, b);

    return 0;
}