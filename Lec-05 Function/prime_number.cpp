#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n)
{
    bool flag = false;
    for(int i = 1; i<n/2; i++)
    {
        if(n/i==0) flag = true;
    }
}
int main(){
    int n = 2;
    cout<<isPrime(n)<<endl;
    return 0;
}