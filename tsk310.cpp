#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"enter a character\n";
cin>>c;
if(c>='a'&&c<='z'){cout<<c<<" is a lowercase alphabet\n";}
else if(c>='A'&&c<='Z'){cout<<c<<" is a uppercase alphabet\n";}
else {cout<<c<<" is not an alphabet\n";}
return 0;
}
