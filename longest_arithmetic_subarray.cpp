

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

    int arr[] = {10, 7, 4, 6, 8, 10, 11};

    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int current = 2;

    while (j < 7)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            current++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }

    cout << ans;

    return 0;
}
