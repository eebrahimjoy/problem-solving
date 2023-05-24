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
    int myNUmber = n;

    while (n > 0)
    {
        myNUmber = myNUmber - pow(n % 10, 3);
        cout << myNUmber << "\n";
        n = n / 10;
    }

    if (myNUmber == 0)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}