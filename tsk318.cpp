#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"enter cost price";
    cin>>a;
    
    cout<<"enter selling price";
    cin>>b;
    if(a>b) {cout<<"loss = "<<a-b<<endl;}
    else if(b>a) {cout<<"profit = "<<b-a<<endl;}
    else{cout<<"no profit no loss";}
    return 0;
}