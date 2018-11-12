#include <iostream>
using namespace std;
int a,b;
int main()
{
cout<<endl;
cin>>a>>b;

while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
cout<<a;
}
