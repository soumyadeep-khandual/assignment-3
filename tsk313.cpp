#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
cout<<"enter amount(in whole number)\n";
cin>>a;
b=a/2000;
c=a%2000;
d=c/500;
e=c%500;
f=e/100;
g=e%100;
h=g/50;
i=g%50;
j=i/20;
k=i%20;
l=k/10;
m=k%10;
n=m/5;
o=m%5;
p=o/2;
q=o%2;
cout<<"number of rs. 2000 notes = "<<b<<"\n"<<"number of rs. 500 notes = "<<d<<"\n"<<"number of rs. 100 notes = "<<f<<"\n"<<"number of rs. 50 notes = "<<h<<"\n"<<"number of rs. 20 notes = "<<j<<"\n"<<"number of rs. 10 notes = "<<l<<"\n"<<"number of rs. 5 coins = "<<n<<"\n"<<"number of rs. 2 coins = "<<p<<"\n"<<"number of rs. 1 coins = "<<q<<"\n"<<"total number of notes + coins = "<<b+d+f+h+j+l+n+p+q<<"\n";
return 0;
}


