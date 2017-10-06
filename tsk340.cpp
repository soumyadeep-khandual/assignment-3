#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int x,y=1,a=0,e,c=1;
cout<<"write the number __ in words\n";
cin>>x;
if (x>=0){x=x;}
else{x=-x;}
while (y>0)

{
y=x/10;a=10*a+x%10;
x=x/10;

}


if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{
c=a/10;e=a%10;
a=a/10;
if (e==0){cout<<"zero ";}
else if (e==1){cout<<"one ";}
else if (e==2){cout<<"two ";}
else if (e==3){cout<<"three ";}
else if (e==4){cout<<"four ";}
else if (e==5){cout<<"five ";}
else if (e==6){cout<<"six ";}
else if (e==7){cout<<"seven ";}
else if (e==8){cout<<"eight ";}
else {cout<<"nine "<<endl;}

}

return 0;
}
