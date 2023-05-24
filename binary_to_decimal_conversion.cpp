#include <iostream>
using namespace std;

int binaryToDecimalCoverstion(int n)
{

    int sum = 0;
    int power = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * pow(2, power));
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

    cout << binaryToDecimalCoverstion(n);
    return 0;
}
