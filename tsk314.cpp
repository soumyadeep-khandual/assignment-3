#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e;
cout<<"*enter absolute angles in degrees*\n";
cout<<"enter 1st angle\n";
cin>>a;
cout<<"enter 2nd angle\n";
cin>>b;
cout<<"enter 3rd angle\n";
cin>>c;
if(a>0&&b>0&&c>0&&a+b+c==180){cout<<"the triangle is possible\n";}
else {cout<<"triangle not possible\n";}
return 0;
}
