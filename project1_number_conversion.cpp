#include<iostream>
#include<math.h>
using namespace std;
double bifrdci();    
double ofrdci();    
double hexfrdci();  
void hexdci(double f);
void odci(double f);
class test 
{
    private: int sel,num,choice,i,j,count,a[20],rev[20],r;
             double f,frc;
             string str;
            void dcitobi();      
            void dcitoo(); 
            void dcitohex();     
            void bitodci(); 
            void bitoo(); 
            void bitohex();     
            void otodci(); 
            void otobi(); 
            void otohex();     
            void hextodci();     
            void hextoo();      
            void hextobi();      
            void line();     
    public: void display();        
};     
int main()
{
    test t;
    for(;;)
    t.display();
    return 0;
}
void test::display()
{   
    line();
    cout<<"\nMenu\n1.Decimal\n2.Binary\n3.Octal\n4.Hexadecimal\n5.Clear_screen\n6.Exit ";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    line();
 invalid:   
    switch(choice)
    {
        case 1:cout<<"\n1.Decimal to Binary\n2.Decimal to Octal\n3.Decimal to Hexadecimal\n4.Menu\n";
               cout<<"Enter your second choice: ";
               cin>>sel;
               if(sel==1)
               {
               line();
               dcitobi();
               }
               else
               if(sel==2)
               {
               line();
               dcitoo();
               }
               else
               if(sel==3)
               {
               line();
               dcitohex();
               }
               if(sel==4)
               {
               line();
               main();
               }
               else
               {
               cout<<"\nInvalid second choice\n";
               goto invalid;
               }
               break;
        case 2:cout<<"\n1.Binary to Decimal\n2.Binary to Octal\n3.Binary to Hexadecimal\n4.Menu\n";
               cout<<"Enter your second choice: ";
               cin>>sel;
               if(sel==1)
               {
               line();
               bitodci();
               }
               else
               if(sel==2)
               {
               line();
               bitoo();
               }
               else
               if(sel==3)
               {
               line();
               bitohex();
               }
               if(sel==4)
               {
               line();
               main();
               }
               else
               {
               cout<<"\nInvalid second choice\n";
               goto invalid;
               }
               break;
        case 3:cout<<"\n1.Octal to Decimal\n2.Octal to Binary\n3.Octal to Hexadecimal\n4.Menu\n";
               cout<<"Enter your second choice: ";
               cin>>sel;
               if(sel==1)
               {
               line();
               otodci();
               }
               else
               if(sel==2)
               {
               line();
               otobi();
               }
               else
               if(sel==3)
               {
               line();
               otohex();
               }
               if(sel==4)
               {
               line();
               main();
               }
               else
               {
               cout<<"\nInvalid second choice\n";
               goto invalid;
               }
               break;
        case 4:cout<<"\n1.Hexadecimal to Decimal\n2.Hexadecimalto Binary\n3.Hexadecimal to Octal\n4.Menu\n";
               cout<<"Enter your second choice: ";
               cin>>sel;
               if(sel==1)
               {
               line();
               hextodci();
               }
               else
               if(sel==2)
               {
               line();
               hextobi();
               }
               else
               if(sel==3)
               {
               line();
               hextoo();
               }
               if(sel==4)
               {
               line();
               main();
               }
               else
               {
               cout<<"\nInvalid second choice\n";
               goto invalid;
               }
               break;
        case 5:system("cls");
               break;
        case 6:exit(0);
        default :cout<<"Invalid choice\n";
    }
}
void test::dcitobi()
{   for(;;) 
   {
    cout<<"\nEnter a decimal number (0.Menu): ";
    cin>>f;
    num=f;
    if(num==0)
    main();
    f=f-num;
    count=0;
    for(i=0;num!=0;i++)
    {
    r=num%2;
    num=num/2;
    a[i]=r;
    count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    cout<<".";
    for(i=1;i<=6;i++)
    { 
    f=f*2;
    num=f;
    cout<<num;
    if(num==1)
    f=f-num;
    }
   }
}
void test::dcitoo()
{   for(;;)
   {
    cout<<"Enter a number decimal (0.Menu): ";
    cin>>f;
    count=0;
    num=f;
    f=f-num;
    if(num==0)
    main();
    for(i=0;num!=0;i++)
    {
        r=num%8;
        num=num/8;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    if(num<f)
    odci(f);
    cout<<endl;
    
}
}
void test::dcitohex()
{
    for(;;)
    {
    cout<<"Enter a decimal number (0.Menu): ";
    cin>>f;
    count=0;
    num=f;
    f=f-num;
    if(num==0)
    main();
    for(i=0;num!=0;i++)
    {
        r=num%16;
        num=num/16;
        a[i]=r;
        count++;
      
    }
    j=0;
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
        if(rev[i]!=10&&rev[i]!=11 &&rev[i]!=12 &&rev[i]!=13&&rev[i]!=14 &&rev[i]!=15)
        cout<<rev[i];
    }
    if(num<f)
    hexdci(f);
    cout<<endl;
    }  
}
void test::bitodci()
{   for(;;)
    {
    f=bifrdci();
    cout<<"Output: "<<f;
    cout<<endl;
    }
}
void test::bitoo()
{   for(;;)
  {
    f=bifrdci();
    count=0;
    num=f;
    f=f-num;
    if(num==0)
    main();
    for(i=0;num!=0;i++)
    {
        r=num%8;
        num=num/8;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    if(num<f)
    odci(f);
    cout<<endl;
  }
}
void test::bitohex()
{   for(;;)
  {
    f=bifrdci();
    count=0;
    num=f;
    f=f-num;
    for(i=0;num!=0;i++)
    {
        r=num%16;
        num=num/16;
        a[i]=r;
        ++count; 
    }
    j=0;
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
        if(rev[i]!=10&&rev[i]!=11 &&rev[i]!=12 &&rev[i]!=13&&rev[i]!=14 &&rev[i]!=15)
        cout<<rev[i];
    }
    if(num<f)
    hexdci(f);
    cout<<endl;
  }
}
void test::otodci()
{   for(;;)
    {
    f=ofrdci();
    cout<<"Output: "<<f;
    cout<<endl;
    }
}
void test::otobi()
{   for(;;)
    {
    f=ofrdci();
    num=f;
    f=f-num;
    count=0;
    for(i=0;num!=0;i++)
    {
        r=num%2;
        num=num/2;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    cout<<".";
    for(i=1;i<=6;i++)
    { 
    f=f*2;
    num=f;
    cout<<num;
    if(num==1)
    f=f-num;
    }
    cout<<endl;
    }
}
void test::otohex()
{   for(;;)
  {
    f=ofrdci();
    count=0;
    num=f;
    f=f-num;
    if(num==0)
    main();
    for(i=0;num!=0;i++)
    {
        r=num%16;
        num=num/16;
        a[i]=r;
        ++count; 
    }
    j=0;
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
    if(rev[i]!=10&&rev[i]!=11 &&rev[i]!=12 &&rev[i]!=13&&rev[i]!=14 &&rev[i]!=15)
    cout<<rev[i];
    }
    if(num<f)
    hexdci(f);
    cout<<endl;
    }  
}
void test::hextodci()
{   
     for(;;)
     {
     f=hexfrdci();
     cout<<"Output: "<<f;
     cout<<endl;
     }   
}
void test::hextoo()
{  for(;;)
 {
    f=hexfrdci();
    count=0;
    num=f;
    f=f-num;
    if(num==0)
    main();
    for(i=0;num!=0;i++)
    {
        r=num%8;
        num=num/8;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    if(num<f)
    odci(f);
    cout<<endl;
    }
}
void test::hextobi()
{
    for(;;)
    {
    f=hexfrdci();
    num=f;
    f=f-num;
    count=0;
    for(i=0;num!=0;i++)
    {
        r=num%2;
        num=num/2;
        a[i]=r;
        count++;
    }
    cout<<"Output: ";
    for(i=count-1;i>=0;i--)
    cout<<a[i];
    cout<<".";
    for(i=1;i<=6;i++)
    { 
    f=f*2;
    num=f;
    cout<<num;
    if(num==1)
    f=f-num;
    }
    cout<<endl;
    }    
}
double bifrdci()
{
    int i,point=0,num[20],dci=0,len,count=0;
    double frc=0;
    string str;
    cout<<"Enter a binary number (-1.Menu): ";
    cin>>str;
    if(str[0]=='-')
    main();
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
    return dci;
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
    count++;
    }
    return frc+dci;
    }
}
void odci(double f)
{
    int d,i;
    cout<<".";
    for(i=1;i<=6;i++)
    {
        f=f*8;
        d=f;
        cout<<d;
        if(d>=1)
        f=f-d;
    }
}
void hexdci(double f)
{   
    int d,i;
    cout<<".";
    for(i=0;i<6;i++)
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
    if(d!=10&&d!=11 &&d!=12 &&d!=13&&d!=14 &&d!=15 )
    cout<<d;
    if(d>=1)
    f=f-d;
    }  
}
double ofrdci()
{
    int i,point=0,num[20],dci=0,len,count=0;
    string str;
    double frc=0;
    cout<<"Enter a octal number (0.Menu): ";
    cin>>str;
    if(str[0]=='0')
    main();
    len=str.length();
    point=str.find('.');
    if(point==-1)
    {
    count=len-1;
    for(i=0;i<len;i++)
    {
    if(str[i]=='0')
    num[i]=0;
    if(str[i]=='1')
    num[i]=1;
    else
    if(str[i]=='2')
    num[i]=2;
    else
    if(str[i]=='3')
    num[i]=3;
    else
    if(str[i]=='4')
    num[i]=4;
    else
    if(str[i]=='5')
    num[i]=5;
    else
    if(str[i]=='6')
    num[i]=6;
    else
    if(str[i]=='7')
    num[i]=7;
    dci=dci+(num[i]*(pow(8,count)));
    count--;
    }
    return dci;
    }
    else
    {
    count=point-1;
    for(i=0;i<point;i++)
    {
    if(str[i]=='0')
    num[i]=0;
    if(str[i]=='1')
    num[i]=1;
    else
    if(str[i]=='2')
    num[i]=2;
    else
    if(str[i]=='3')
    num[i]=3;
    else
    if(str[i]=='4')
    num[i]=4;
    else
    if(str[i]=='5')
    num[i]=5;
    else
    if(str[i]=='6')
    num[i]=6;
    else
    if(str[i]=='7')
    num[i]=7;
    dci=dci+(num[i]*(pow(8,count)));
    count--;
    }
    count=1;
    for(i=point+1;i<len;i++)
    {
    if(str[i]=='0')
    num[i]=0;
    if(str[i]=='1')
    num[i]=1;
    else
    if(str[i]=='2')
    num[i]=2;
    else
    if(str[i]=='3')
    num[i]=3;
    else
    if(str[i]=='4')
    num[i]=4;
    else
    if(str[i]=='5')
    num[i]=5;
    else
    if(str[i]=='6')
    num[i]=6;
    else
    if(str[i]=='7')
    num[i]=7;   
    frc=frc+(num[i]/(pow(8,count)));
    count++;
    }
    return dci+frc;
    }
}
double hexfrdci()
{
    int i,len,point=0,count=0,hex=0,a[20];
    string str;
    double frc=0;
    cout<<"Enter a hexadecimal number (0.Menu): ";
    cin>>str;
    if(str[0]=='0')
    main();
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
    return hex;
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
      return hex+frc; 
   }
}
void test::line()
{
    for(i=0;i<=20;i++)
    cout<<"---";
    cout<<endl;
}
