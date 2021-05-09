#include<iostream>
void odci(float f);
using namespace std;
int main()
{
    int num,a[10],r,i,count;
    float f;
    count=0;
    cout<<"Enter a decimal number: ";
    cin>>f;
    num=f;
    f=f-num;
    for(i=0;num!=0;i++)
    {
        r=num%8;
        num=num/8;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    {
        cout<<a[i];
    }
    if(num<f)
    odci(f);
    return 0;
}
void odci(float f)
{
    int d,i;
    cout<<".";
    for(i=1;i<=6;i++)
    {
        f=f*8;
        d=f;
        cout<<d;
        f=f-d;
    }
}


