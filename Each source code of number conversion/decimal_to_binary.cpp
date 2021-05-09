#include<iostream>
using namespace std;
void dcifrbi();
int main()
{   dcifrbi();
    return 0;
}
void dcifrbi()
{   int dul,d,count,i,a[10],r=0;
    count=0;
    float f;
    cout<<"\nEnter a decimal number: ";
    cin>>f;
    dul=f;
    if(f==0)
    main();
    f=f-dul;
    for(i=0;dul!=0;i++)
    {
        r=dul%2;
        dul=dul/2;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<".";
    for(i=1;i<=6;i++)
    { 
    f=f*2;
    d=f;
    cout<<d;
    if(d==1)
    f=f-d;
    }
}    
