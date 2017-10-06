#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter week day number to print week day\nexample:\nmonday=1,\ntuesday=2\nso on...\n";
cin>>a;
if(a==1)
cout<<"it is monday\n";
else if(a==2)
cout<<"it is tuesday\n";
else if(a==3)
cout<<"it is wednesday\n";
else if(a==4)
cout<<"it is thursday\n";
else if(a==5)
cout<<"it is friday\n";
else if(a==6)
cout<<"it is saturday\n";
else if(a==7)
cout<<"it is sunday\n";
else
cout<<"lol....doesnot correspond to any day....\n";
return 0;
}
