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
    int myNUmber = 0;

    while (n > 0)
    {
        myNUmber = myNUmber * 10 + n % 10;
        n = n / 10;
    }

    cout << myNUmber;

    return 0;
}