#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 2 pointer approach
int maxArea(vector<int>& height) {
        int st = 0, end = height.size()-1,area = 0;
        while(st<end){
            int w = end-st;
            int h = min(height[st],height[end]);
            int currArea = w * h;
            area = max(area,currArea);
            height[st]<height[end]? st++ : end--;
        }
        return area;
    }

int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl;
    return 0;
}