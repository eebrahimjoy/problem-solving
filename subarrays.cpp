#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int array[5] = {1, 2, 0, 7, 2};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            sum += array[j];

            cout << array[j] << " ";
        }

        cout << "\n";
    }

    // cout << sum;

    return 0;
}
