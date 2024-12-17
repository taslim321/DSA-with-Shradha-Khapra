#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Optimized
int majorityElements(vector<int>nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq = 1; int ans = nums[0];
    for(int i = 1;i<n; i++)
    {
        if(nums[i]==nums[i-1]) freq++;
        else freq = 1; ans = nums[i];

        if(freq>(n/2)) return nums[i];
    }
    
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    cout<<majorityElements(nums)<<endl;
    return 0;
}