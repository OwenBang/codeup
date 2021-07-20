#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < num; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}