#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"enter a character\n";
cin>>c;
if(c>='a'&& c<='z'){cout<<c<<" is an alphabet\n";}
else if(c>='A'&& c<='Z'){cout<<c<<" is an alphabet\n";}
else if(c>='0'&&c<='9'){cout<<c<<" is a digit\n";}
else{cout<<c<<" is a special character\n";}
return 0;
}
