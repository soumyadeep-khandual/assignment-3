#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a number\n";
cin>>a;
if (a%5==0&&a%11==0){cout<<"the number is divisible by both 5 & 11\n";}
else if (a%5==0){cout<<"the number is divisible by 5\n";}
else if (a%11==0){cout<<"the number is divisible by 11\n";}
else{cout<<"the number is neither divisible by 5 nor by 11\n";}
return 0;
}
