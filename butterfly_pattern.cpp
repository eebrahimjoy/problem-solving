#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int space = 2 * num - 2 * i;
        for (int k = 1; k <= space; k++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << "\n";
    }

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int space = 2 * num - 2 * i;
        for (int k = 1; k <= space; k++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}