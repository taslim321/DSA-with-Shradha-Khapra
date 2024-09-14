#include<iostream>
#include<limits.h> // for INT_MAX
using namespace std;

int findSmallestNumberIndex(int arr[],int n)
{
    int min = INT_MAX;
    
    for(int i = 0; i<n; i++)
    {
        if(min>arr[i])
        {
           min = i;
        }
    }
    return min;
}
int main(){
    int arr[] = {13,27,-04,75,-15,38,-40,20};

    int minIndex = findSmallestNumberIndex(arr,8);
    cout<<minIndex+1<<endl;

    return 0;
}