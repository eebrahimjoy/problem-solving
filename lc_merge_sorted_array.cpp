

#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> nums1;
    vector<int> nums2;
    int m = 0, n = 1;

    nums1.push_back(0);
    // nums1.push_back(2);
    // nums1.push_back(3);
    // nums1.push_back(0);
    // nums1.push_back(0);
    // nums1.push_back(0);

    nums2.push_back(1);
    // nums2.push_back(5);
    // nums2.push_back(6);

    int i = nums1.size(), j = 0;

    while (i > m)
    {
        nums1.pop_back();
        i--;
    }

    while (j < n)
    {
        nums1.push_back(nums2[j]);
        j++;
    }

    int counter = 1;

    while (counter < nums1.size())
    {
        for (int i = 0; i < nums1.size() - counter; i++)
        {

            if (nums1[i] > nums1[i + 1])
            {
                int temp = nums1[i];
                nums1[i] = nums1[i + 1];
                nums1[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < nums1.size(); i++)
    {

        cout << nums1[i];
    }

    return 0;
}
