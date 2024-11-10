#include<iostream>
using namespace std;
main()
{
    string s;
    bool isTrue=false;
    int x;
    cout<<"Enter a string";
    cin>>s;
    for(x=0;s[x]!='!';x++)
    if(s[x]=='7')
    {
        isTrue=true;
    s[x+1]='!';
    }
    if(isTrue)
    cout<<"Boom";
    else
    cout<<"There is no 7 in array";

}