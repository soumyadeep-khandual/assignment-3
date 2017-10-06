#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,c=1,e=0;
cout<<"reverse order of digits in the number __\n";
cin>>a;
if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{
c=a/10;e=10*e+a%10;
a=(a-a%10)/10;

}

cout<<e<<endl;

return 0;
}
