

#include <iostream>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{

    int start = 0, end = nums.size();

    while (start < end)
    {

        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (((start + end) / 2) > target)
    {

        return ((start + end) / 2) - 1;
    }
    else
    {
        return ((start + end) / 2) + 1;
    }
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
    // n.push_back(5);
    // n.push_back(6);

    int target;
    cin >> target;

    cout << binarySearch(n, target);

    return 0;
}
