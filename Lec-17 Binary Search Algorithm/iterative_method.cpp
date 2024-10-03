#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int tar)
{
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (nums[mid] > tar)
        {
            end = mid - 1;
        }
        else if (nums[mid] < tar)
        {
            st = mid + 1;
        }else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr = {-1,10,11,14,16,19,22};
    int tar = 19;
    cout<<binarySearch(arr,tar)<<endl;
    return 0;
}