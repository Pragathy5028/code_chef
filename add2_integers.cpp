// The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        int s=0;
        s=a+b;
        cout<<s<<"\n";
    }
    return 0;
}

// test input
// 3
// 1 2
// 100 200
// 10 40



