#include<iostream>
using namespace std;
main()
{
 string s;
 int k=0;
 cout<<"Enter a string: ";
 cin>>s;   
 for(int x=0;s[x]!='\0';x++)
 k++;
 if(k%2==0)
 cout<<"Even";
 else
 cout<<"Odd";
}