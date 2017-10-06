#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter month number to print number of day in the month\nexample:\njan=1,\nfeb=2\nso on...\n";
cin>>a;
if(a>=1&&a<=12){
if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
{cout<<"it has 31 days\n";}
else if(a==2)
{cout<<"it has 28 days\n";}
else
{cout<<"it  has 30 days\n";};}
else
{cout<<"lol....doesnot correspond to any month....\n";}
return 0;
}
