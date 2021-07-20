#include <iostream>
using namespace std;

void test(int num)
{
    cout << num << endl;
    if (num == 1)
    {
    }
    else if (num % 2 == 1)
    {
        test(3 * num + 1);
    }
    else
    {
        test(num / 2);
    }
}
int main()
{
    int num;
    cin >> num;

    test(num);

    return 0;
}