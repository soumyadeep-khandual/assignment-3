#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"enter a character\n";
cin>>c;
if(c>='a'&& c<='z'||c>='A'&& c<='Z'){cout<<c<<" is an alphabet\n";if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){cout<<c<<" is a vowel\n";}else{cout<<c<<" is a consonant\n";};}
else{cout<<c<<" is not an alphabet\n";}
return 0;
}
