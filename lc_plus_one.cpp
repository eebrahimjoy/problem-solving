

#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> digits;

    // digits.push_back(8);
    // digits.push_back(8);
    digits.push_back(9);

    int size = digits.size() - 1;

    while (size >= 0 && digits[size] == 9)
    {
        size--;
    }
    if (size == -1)
    {
        vector<int> results(digits.size() + 1, 0);
        results[0] = 1;
        // return results;
    }

    vector<int> results(digits.size(), 0);
    results[size] = digits[size] + 1;

    for (int i = 0; i < size; i++)
    {
        results[i] = digits[i];
    }

    for (int j = 0; j < results.size(); j++)
    {
        cout << results[j];
    }

    return 0;
}
