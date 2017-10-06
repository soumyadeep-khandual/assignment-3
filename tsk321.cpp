#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"enter units consumed\n";
    cin>>a;
    if(a<=50) {cout<<"electricity bill = "<<(a*0.50)*1.2<<endl;}
    else if(a>50&&a<=150){cout<<"electricity bill = "<<((50*0.50)+(a-50)*0.75)*1.2<<endl;}
    else if(a>150&&a<=250){cout<<"electricity bill = "<<((50*0.50)+(100*0.75)+(a-150)*1.2)*1.2<<endl;}
    else if(a>250){cout<<"electricity bill = "<<((50*0.50)+(100*0.75)+(150*1.2)+(a-250)*1.5)*1.2<<endl;}
    return 0;
}