#include<iostream>
using namespace std;
int main()
{
    int num1,num2,a,b,x,L;
    cout<<"Enter your first number :\n";
    cin>>num1;
    cout<<"Enter your second number :\n";
    cin>>num2;
    a=num1;
    b=num2;
    if(b>a){
    while(b!=0){
        x=b;
        b=a%b;
        a=x;
    }
   } else {
     while(a!=0){
        x=a;
        a=b%a;
        b=x;
     }
   }
   L = (num1*num2)/x;
   cout<<"The LCM = "<<L;

   return 0;
}
