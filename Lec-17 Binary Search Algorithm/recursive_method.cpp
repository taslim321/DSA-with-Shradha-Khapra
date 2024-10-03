#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int tar,int st, int end)
{
    
    if (st <= end)
    {
        int mid = st + (end-st) / 2;
        if (nums[mid] > tar)
        {
            return binarySearch(nums,tar,st, mid-1);
        }
        else if (nums[mid] < tar)
        {
            return binarySearch(nums,tar,mid+1, end);
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
    cout<<binarySearch(arr,tar,0,arr.size()-1)<<endl;
    return 0;
}