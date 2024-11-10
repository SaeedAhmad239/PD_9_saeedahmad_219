#include<iostream>
using namespace std;
main()
{
    string s[4];
    int x,a=0;
    cout<<"Enter string";
    for(x=0;x<4;x++)
    cin>>s[x];
    for(x=0;x<4;x++)
    {
    if(s[x]==s[x+1])
    a++;
    }
    if(a==x-1)
    cout<<"Yes";
    else
    cout<<"No";


}