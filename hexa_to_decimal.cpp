#include <iostream>
using namespace std;

int hexaToDecimalCoverstion(string n)
{

    int sum = 0;
    int power = 0;

    for (int i = n.size() - 1; i >= 1; i--)
    {
        switch (n[i])
        {
        case 'A':

            break;

        default:
            break;
        }
    }
    {
    }

    while (n.size() > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * pow(16, power));
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

    string n;
    cin >> n;

    cout << hexaToDecimalCoverstion(n);
    return 0;
}
