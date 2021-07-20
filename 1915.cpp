#include <iostream>
using namespace std;

int test(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return test(num - 1) + test(num - 2);
}

int main()
{
    int num;
    cin >> num;

    cout << test(num) << endl;

    return 0;
}