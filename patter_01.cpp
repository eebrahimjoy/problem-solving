#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int row;
    cin >> row;

    int count = 0;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {

                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }

        cout << "\n";
    }

    return 0;
}