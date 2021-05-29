#include<iostream>
#include<math.h>
using namespace std;
void hexfrdci();
int main()
{  
    hexfrdci();
    return 0;
}
void hexfrdci()
{
    int i,len,point=0,count=0,hex=0,a[20];
    string str;
    float frc=0;
    cout<<"Enter a hexadecimal number: ";
    cin>>str;
    len=str.length();
    point=str.find('.');
    if(point==-1)
    {
     count=len-1;
    for(i=0;i<len;i++)
    {
        if(str[i]=='0')
        a[i]=0;
        else
        if(str[i]=='1')
        a[i]=1;
        else
        if(str[i]=='2')
        a[i]=2;
        else
        if(str[i]=='3')
        a[i]=3;
        else
        if(str[i]=='4')
        a[i]=4;
        else
        if(str[i]=='5')
        a[i]=5;
        else
        if(str[i]=='6')
        a[i]=6;
        else
        if(str[i]=='7')
        a[i]=7;
        else
        if(str[i]=='8')
        a[i]=8;
        else
        if(str[i]=='9')
        a[i]=9;
        else
        if(str[i]=='A'|| str[i]=='a')
        a[i]=10;
        else
        if(str[i]=='B' || str[i]=='b')
        a[i]=11;
        else
        if(str[i]=='C' || str[i]=='c')
        a[i]=12;
        else
        if(str[i]=='D' || str[i]=='d')
        a[i]=13;
        else
        if(str[i]=='E' || str[i]=='e')
        a[i]=14;
        else
        if(str[i]=='F' || str[i]=='f')
        a[i]=15;
        hex=hex+a[i]*(pow(16,count));
        count--;
     }
    cout<<"Output: "<<hex;
    }
    else
    {
        count=point-1;
        for(i=0;i<point;i++)
        {
        if(str[i]=='0')
        a[i]=0;
        else
        if(str[i]=='1')
        a[i]=1;
        else
        if(str[i]=='2')
        a[i]=2;
        else
        if(str[i]=='3')
        a[i]=3;
        else
        if(str[i]=='4')
        a[i]=4;
        else
        if(str[i]=='5')
        a[i]=5;
        else
        if(str[i]=='6')
        a[i]=6;
        else
        if(str[i]=='7')
        a[i]=7;
        else
        if(str[i]=='8')
        a[i]=8;
        else
        if(str[i]=='9')
        a[i]=9;
        else
        if(str[i]=='A'|| str[i]=='a')
        a[i]=10;
        else
        if(str[i]=='B' || str[i]=='b')
        a[i]=11;
        else
        if(str[i]=='C' || str[i]=='c')
        a[i]=12;
        else
        if(str[i]=='D' || str[i]=='d')
        a[i]=13;
        else
        if(str[i]=='E' || str[i]=='e')
        a[i]=14;
        else
        if(str[i]=='F' || str[i]=='f')
        a[i]=15;
        hex=hex+a[i]*(pow(16,count));
        count--;
        }
    count=1;
    for(i=point+1;i<len;i++)
    {
       if(str[i]=='0')
        a[i]=0;
        else
        if(str[i]=='1')
        a[i]=1;
        else
        if(str[i]=='2')
        a[i]=2;
        else
        if(str[i]=='3')
        a[i]=3;
        else
        if(str[i]=='4')
        a[i]=4;
        else
        if(str[i]=='5')
        a[i]=5;
        else
        if(str[i]=='6')
        a[i]=6;
        else
        if(str[i]=='7')
        a[i]=7;
        else
        if(str[i]=='8')
        a[i]=8;
        else
        if(str[i]=='9')
        a[i]=9;
        else
        if(str[i]=='A'|| str[i]=='a')
        a[i]=10;
        else
        if(str[i]=='B' || str[i]=='b')
        a[i]=11;
        else
        if(str[i]=='C' || str[i]=='c')
        a[i]=12;
        else
        if(str[i]=='D' || str[i]=='d')
        a[i]=13;
        else
        if(str[i]=='E' || str[i]=='e')
        a[i]=14;
        else
        if(str[i]=='F' || str[i]=='f')
        a[i]=15;
        frc=frc+a[i]/(pow(16,count));
        count++;  
      }
      cout<<"Output: "<<hex+frc;
   }
}
