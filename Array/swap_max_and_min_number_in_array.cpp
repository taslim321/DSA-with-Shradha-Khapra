#include<iostream>
#include<limits.h> // for INT_MAX
using namespace std;

int swapMaxAndMinNumber(int arr[],int n)
{
    int min = INT_MAX;
    int max =INT_MIN;
    int maxIndex,minIndex;
    for(int i = 0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
        if(min>arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }
    swap(arr[maxIndex],arr[minIndex]);
}

int main(){
    int n = 8;
    int arr[n] = {13,27,-04,75,-15,38,-40,20};
    swapMaxAndMinNumber(arr,n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}