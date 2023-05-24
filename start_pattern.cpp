#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {

            cout << "  ";
        }

        int start = 2 * i - 1;
        for (int k = 1; k <= start; k++)
        {

            cout << "* ";
        }

        cout << "\n";
    }

    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {

            cout << "  ";
        }

        int start = 2 * i - 1;
        for (int k = 1; k <= start; k++)
        {

            cout << "* ";
        }

        cout << "\n";
    }

    return 0;
}