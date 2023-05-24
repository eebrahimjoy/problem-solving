#include <iostream>
using namespace std;

int factorial(int n)
{

    int nFactorial = 1;

    for (int i = 2; i <= n; i++)
    {

        nFactorial = nFactorial * i;
    }
    return nFactorial;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(i - j) * factorial(j)) << " ";
        }
        cout << "\n";
    }

    return 0;
}
