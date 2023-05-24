#include <iostream>
using namespace std;

string pythagoreanTriple(int a, int b, int c)
{

    if ((a * a) + (b * b) == (c * c))
    {
        return "Pythagorean triple";
    }
    else
    {
        return "Not Pythagorean triple";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    cout << pythagoreanTriple(a, b, c);
    return 0;
}
