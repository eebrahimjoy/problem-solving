#include <iostream>
using namespace std;

int octalToDecimalCoverstion(int n)
{

    int sum = 0;
    int power = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * pow(8, power));
        power++;
        n = n / 10;
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << octalToDecimalCoverstion(n);
    return 0;
}
