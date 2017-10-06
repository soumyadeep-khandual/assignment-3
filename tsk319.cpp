#include <iostream>
using namespace std;

int main()
{
    float p,c,b,m,co,P;
    cout<<"Enter your marks in physics, chemistry, biology, mathematics, computer respectively out of 100:\n";
    cin>>p>>c>>b>>m>>co;
    cout<<"Your percentage=";
    cout<<(p+c+b+m+co)/5;
    P=(p+c+b+m+co)/5;
    if(P>=90&&P<100){
        cout<<" Grade:A";
    } else if(P>=80&&P<90){
        cout<<" Grade:B";
    } else if(P>=70&&P<80){
        cout<<" Grade:C";
    } else if(P>=60&&P<70){
        cout<<" Grade:D";
    } else if(P>=40&&P<60){
        cout<<" Grade:E";
    } else {
        cout<<" Grade:F";
    }

    return 0;
}
