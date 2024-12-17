#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Mooore's Voting Algorithm
int majorityElements(vector<int>nums){
    int n = nums.size();
    int freq = 0; int ans = 0;
    for(int i = 0;i<n; i++)
    {
        if(freq == 0 ) ans = nums[i];
        if(ans==nums[i]) freq++;
        else freq--;
        //variation
        int count = 0;
        for(int val: nums){
            if(val == ans) count++;
        }
        if(count>(n/2)) return ans;
        else return -1;

    }
    
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    cout<<majorityElements(nums)<<endl;
    return 0;
}