#include<iostream>
using namespace std;
int main ()
{
    int a,b,temp;
    cout<<"Enter the value of aand b:"<<endl;
    cin>>a>>b;
    
    temp=a;
    a=b;
    b=temp;
    
    cout<<"after swapping "<<a<<" and "<<b<<endl;
    return 0;
}

