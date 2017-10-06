#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,c=1,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0;
cout<<"frequency of digits in the number __\n";
cin>>a;
if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{
c=a/10;
e=a%10;
a=a/10;
if (e==0)
{f=f+1;}
else if (e==1)
{g=g+1;}
else if (e==2)
{h=h+1;}
else if (e==3)
{i=i+1;}
else if (e==4)
{j=j+1;}
else if (e==5)
{k=k+1;}
else if (e==6)
{l=l+1;}
else if (e==7)
{m=m+1;}
else if (e==8)
{n=n+1;}
else if (e==9)
{o=o+1;}


}

cout<<"no. of 0's = "<<f<<endl;
cout<<"no. of 1's = "<<g<<endl;
cout<<"no. of 2's = "<<h<<endl;
cout<<"no. of 3's = "<<i<<endl;
cout<<"no. of 4's = "<<j<<endl;
cout<<"no. of 5's = "<<k<<endl;
cout<<"no. of 6's = "<<l<<endl;
cout<<"no. of 7's = "<<m<<endl;
cout<<"no. of 8's = "<<n<<endl;
cout<<"no. of 9's = "<<o<<endl;


return 0;
}
