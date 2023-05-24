#include <iostream>
using namespace std;

int factorial(int num)
{

    int factorialNum = 1;
    for (int i = 2; i <= num; i++)
    {
        factorialNum = factorialNum * i;
    }
    return factorialNum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;

    cout << factorial(n1) << "\n";
    cout << factorial(n2) << "\n";

    return 0;
}
