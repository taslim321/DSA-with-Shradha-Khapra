#include<iostream>
#include<vector>
using namespace std;

int findUniqueValue(int arr[],int n)
{
    vector<int>uniqueArray(n,0);
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                uniqueArray[arr[i]]=1;
            }else
            {
                uniqueNumber = arr[i];
            }
        }
    }
    return ;
}

int main(){
    int arr[] = {1,3,4,5,1,3,4,5,10,10,100};
    cout<<findUniqueValue(arr,11);
    return 0;
}