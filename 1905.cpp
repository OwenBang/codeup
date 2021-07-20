#include <iostream>
using namespace std;

int n = 1;
int total = 0;

int test(int num)
{
    total += n;
    n++;
    if (n <= num)
    {
        test(num);
    }
    return total;
}

int main()
{
    int num;
    cin >> num;

    cout << test(num);

    return 0;
}