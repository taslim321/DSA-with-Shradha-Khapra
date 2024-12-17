#include<iostream>
#include<vector>
using namespace std;

void isPrime(int n)
{ 
    for(int i = 2; i<=n/2; i++)
    {
        if(n/i==0) cout<<n<<" ";
    }
}
int main(){
    int n = 30;
    for(int i = 2; i<=n; i++)
    {
        isPrime(i);
    }
    return 0;
}