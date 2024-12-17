#include<iostream>
#include<limits.h>
using namespace std;
//Most Optimized
int mss(int arr[],int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i<n; i++)
    {
        currSum+=arr[i];
        maxSum= max(maxSum,currSum);
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
}
int main(){
     int n = 7;
    int arr[n] = {3,-4,5,4,-1,7,-8};
    // int arr[n] = {1,2,3,4,5};

    cout<<mss(arr,n)<<endl;
    return 0;
}