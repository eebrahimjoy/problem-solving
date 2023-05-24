#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Maximum Number is: " << num1;
        }
        else
        {
            cout << "Maximum Number is: " << num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "Maximum Number is: " << num2;
        }
        else
        {
            cout << "Maximum Number is: " << num3;
        }
    }

    return 0;
}