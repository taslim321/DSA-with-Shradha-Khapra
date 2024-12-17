#include<iostream>
#include<vector>
using namespace std;

int sod(int num)
{
    int sum = 0;
    while (num>0)
    {
        int last_digit = num%10;
        sum+=last_digit;
        num/=10;
    }
    return sum;
}
int main(){
    int num = 1234;
    cout<<sod(num)<<endl;
    return 0;
}