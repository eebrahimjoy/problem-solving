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
    n = n++ + ++n;
    cout << n << "\n";

    int k, i = 1, j = 2;

    k = i + j + i++ + j++ + ++i + ++j;

    cout << k << "\n";

    int l = 0;
    l = l++ - --l + ++l - l--;

    cout << l;

    return 0;
}