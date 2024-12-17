#include<iostream>
#include<vector>
using namespace std;

int fact(int n)
{
    int fact = 1;
    
    for(int i =1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n = 8, r = 2;
    cout<<fact(n)/(fact(r)*fact(n-r))<<endl;
    // cout<<fact(1);

    return 0;
}