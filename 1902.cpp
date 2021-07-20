#include <iostream>
using namespace std;

void test(int num)
{
    if (num == 1)
        cout << num << endl;
    else
    {
        cout << num << endl;
        num--;
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