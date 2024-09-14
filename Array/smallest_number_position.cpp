#include<iostream>
#include<limits.h> // for INT_MAX
using namespace std;

int findSmallestNumberIndex(int arr[],int n)
{
    int min = INT_MAX;
    int minimumNumber;
    
    for(int i = 0; i<n; i++)
    {
        if(min>arr[i])
        {
            int min = arr[i];
           minimumNumber = i;
        }
    }
    return minimumNumber;
}
int main(){
    int arr[] = {13,27,-04,75,-15,38,-40,20};

    int minIndex = findSmallestNumberIndex(arr,8);
    cout<<minIndex+1<<endl;

    return 0;
}