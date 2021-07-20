#include <iostream>
using namespace std;

int result = 1;

int test(int num)
{
    result = result * num;
    num--;
    if (num > 0)
        test(num);
    return result;
}

int main()
{
    int num;
    cin >> num;

    cout << test(num) << endl;

    return 0;
}