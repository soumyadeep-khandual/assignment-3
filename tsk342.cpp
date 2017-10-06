#include<iostream>
using namespace std;
int main()
{
    int num,a,i,p=1;
    cout<<"Enter a number :\n";
    cin>>num;
    cout<<"Enter the power to which you want to raise the number\n";
    cin>>a;
    for(i=0; i<a; i++){
        p=p*num;
    }
    cout<<num<<" to the power "<<a<<" = "<<p;

   return 0;
}
