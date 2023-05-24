#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int row, colum;
    cin >> row >> colum;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < colum; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}