#include<iostream>
using namespace std;

int main(){
    int n = 4;

    //square pattern with number
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
    //square pattern with star
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // square pattern with character 
    for(int i = 0; i<n; i++)
    {
        char c = 'A';
        for(int j = 0; j<n; j++)
        {
            cout<<c<<" ";
            c = c+1; //implicit 
        }
        cout<<endl;
    }
    //Square pattern with Sequence number
    int num = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    //Square pattern with Sequence character
    char ch = 'A';
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }

    //Triangle Pattern with star
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //Triangle Pattern with Number
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    //Triangle Pattern with char
    ch = 'A';
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<ch<<" ";
        }
            ch = ch + 1;
        cout<<endl;
    }
    //Trianle pattern with sequence Number
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
    //Reverse Trangle pattern with number
    for(int i = 0; i<n; i++)
    {
        for(int j = (i+1); j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Reverse Trangle pattern with charcter
    for(int i = 0; i<n; i++)
    {
        char c = 'A'+i;
        for(int j = (i+1); j>0; j--)
        {
            cout<<c<<" ";
            c = c-1;
        }
        cout<<endl;
    }

    //Floyd's Triangle pattern with number
    num = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    //Floyd's Triangle pattern with character
    ch = 'A';
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(i+1); j++)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    //Inverted Triangle pattern with number
    for(int i = 0 ; i< n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j<(n-i) ; j++)
        {
            cout<<(i+1);
        }
        cout<<endl;
    }
    //Inverted Triangle pattern with character
    ch = 'A';
    for(int i = 0 ; i< n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j<(n-i) ; j++)
        {
            cout<<ch;
        }
        ch= ch+1;
        cout<<endl;
    }
    // Pyramid Pattren
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<(n-i-1); j++)
        {
            cout<<" ";
        }
        for(int j =0 ; j<i+1; j++)
        {
            cout<<(j+1);
        }
        for(int j = (i); j>0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}