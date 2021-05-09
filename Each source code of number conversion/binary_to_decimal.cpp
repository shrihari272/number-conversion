#include<iostream>
#include<math.h>
void bifrdci();
using namespace std;
int main()
{
    bifrdci();
    return 0;
}
void bifrdci()
{
    int i,point=0,num[10],dci=0,len,count=0;
    float frc=0;
    string str;
    cout<<"Enter a binary number: ";
    cin>>str;
    len=str.length();
    point=str.find('.');
    if(point==-1)
    {
    count=len-1;
    for(i=0;i<len;i++)
    {
    if(str[i]=='1')
    num[i]=1;
    else
    num[i]=0;
    dci=dci+(num[i]*(pow(2,count)));
    count--;
    }
    cout<<"Output: "<<dci;
    }
    else
    {
    count=point-1;
    for(i=0;i<point;i++)
    {
    if(str[i]=='1')
    num[i]=1;
    else
    num[i]=0;
    dci=dci+(num[i]*(pow(2,count)));
    count--;
    }
    count=1;
    for(i=point+1;i<len;i++)
    {
    if(str[i]=='1')
    num[i]=1;
    else
    num[i]=0;   
    frc=frc+(num[i]/(pow(2,count)));
    ++count;
    }
    cout<<"Output: "<<dci+frc;
    }
}