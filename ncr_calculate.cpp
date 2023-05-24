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

    int n, r;
    cin >> n >> r;

    cout << factorial(n) / (factorial(n - r) * factorial(r));

    return 0;
}
