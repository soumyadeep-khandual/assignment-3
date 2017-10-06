#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c;
cout<< "enter 1st number\n";
cin>>a;
cout<< "enter 2nd number\n";
cin>>b;
cout<< "enter 3rd number\n";
cin>>c;
if (a>=b&&a>=c){cout<<"the greater number = "<<a<<"\n";}
else if(b>=a&&b>=c) {cout<<"the greater number = "<<b<<"\n";}else{cout<<"the greater number = "<<c<<"\n";}
return 0;
}
