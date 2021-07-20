#include <iostream>
using namespace std;

int arr[];
void test(int num)
{
    if (num == 0)
        arr[0] = 0;
    else if (num == 1)
        arr[1] = 1;
    else
        arr[num] = ((arr[num - 1]) % 10009 + (arr[num - 2]) & 10009) % 10009;
}

int main()
{
    int num;
    cin >> num;

    test(num);
    cout << arr[num] << endl;

    return 0;
}