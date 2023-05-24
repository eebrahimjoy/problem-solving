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

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j >= row - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}