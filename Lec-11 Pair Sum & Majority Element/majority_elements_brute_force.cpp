#include<iostream>
#include<vector>
using namespace std;
//bruet force approach
int majorityElements(vector<int>nums){
    int n = nums.size();
    for(int val:nums){
        int freq = 0;
        for(int ele:nums){
            if(ele==val) freq++;
        }
        if(freq>(n/2)) return val;
    }
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    cout<<majorityElements(nums)<<endl;
    return 0;
}