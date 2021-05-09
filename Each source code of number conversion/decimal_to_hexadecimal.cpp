#include<iostream>
using namespace std;
void hexdci(float f);
int main()
{
    int num,a[10],temp,rev[10],r,i,count,j=0;
    float f;
    count=0;
    cout<<"Enter a decimal number : ";
    cin>>f;
    num=f;
    f=f-num;
    for(i=0;num!=0;i++)
    {
        r=num%16;
        num=num/16;
        a[i]=r;
        ++count;
    }
    for(i=count-1;i>=0;i--)
    {
       rev[j]=a[i];
       j++;
    }
    cout<<"Output: ";
    for(i=0;i<count;i++)
    {  
        if(rev[i]==10)
        cout<<"A";
        else
        if(rev[i]==11)
        cout<<"B";
        else
        if(rev[i]==12)
        cout<<"C";
        else
        if(rev[i]==13)
        cout<<"D";
        else
        if(rev[i]==14)
        cout<<"E";
        else
        if(rev[i]==15)
        cout<<"F";
     
        if(rev[i]!=10&&rev[i]!=11 &&rev[i]!=12 &&rev[i]!=13&&rev[i]!=14 &&rev[i]!=15 )
        {
        cout<<rev[i];
        }
    }

    if(num<f)
    hexdci(f);
    return 0;
}
void hexdci(float f)
{   
    int d,i;
    cout<<".";
    for(i=1;i<=6;i++)
   { 
    f=f*16;
    d=f; 
    if(d==10)
    cout<<"A";
    else
    if(d==11)
    cout<<"B";
    else
    if(d==12)
    cout<<"C";
    else
    if(d==13)
    cout<<"D";
    else
    if(d==14)
    cout<<"E";
    else
    if(d==15)
    cout<<"F";
    if(d!=10&&d!=11 &&d!=12 &&d!=13&&d!=14 &&d!=15)
    cout<<d;
    if(d>=1)
    f=f-d;
    }  
}

