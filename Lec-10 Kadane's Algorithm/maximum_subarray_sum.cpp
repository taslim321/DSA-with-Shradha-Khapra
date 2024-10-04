#include<iostream>
#include<limits.h> // for INT_MAX
using namespace std;
//brute force approach
int mss(int arr[],int n)
{
    int maxSum = INT_MIN;
    for(int st = 0 ; st<n ; st++)
    {
        int currSum = 0;
        for(int end = st; end<n ; end++)
        {
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
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