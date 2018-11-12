#include<iostream>
using namespace std;
int a;
int b;
cin<<a<<b;
int main()
{

     while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"Cmmdc = "<<a;
    x=a;
    y=b;
    r=a%b;
    while(r!=0)
        {
        a=b;
        b=r;
        r=a%b;
       }
    if(b==1){cout<<"DA"}
    else {cout<<"NU"}
