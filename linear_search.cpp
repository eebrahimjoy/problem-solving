
#include <iostream>
using namespace std;

int linearSearch(vector<int> &nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> n;
    n.push_back(1);
    n.push_back(3);
    n.push_back(5);
    n.push_back(6);
    int target;
    cin >> target;

    cout << linearSearch(n, target);

    return 0;
}
