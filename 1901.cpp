#include <iostream>
using namespace std;

int n = 1;

void test(int num)
{
    if (n == num)
        cout << n << endl;
    else
    {
        cout << n << endl;
        n++;
        test(num);
    }
}

int main()
{
    int num;
    cin >> num;

    test(num);

    return 0;
}