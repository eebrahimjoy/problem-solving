#include <iostream>
using namespace std;

int fibenacci(int n)
{

    int term1 = 0;
    int term2 = 1;

    cout << 0 << "\n"
         << 1 << "\n";

    for (int i = 1; i <= n; i++)
    {

        int next = term1 + term2;
        cout << next << "\n";
        term1 = term2;
        term2 = next;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    fibenacci(n);

    return 0;
}
