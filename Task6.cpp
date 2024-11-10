#include<iostream>
using namespace std;
main()
{
    int s[3],x,num;
    cout<<"Enter array";
    for(x=0;x<3;x++)
    cin>>s[x];
    cout<<"Enter number of transformation";
    cin>>num;
    for(int y=1;y<=num;y++)
    for(x=0;x<3;x++)
    {
        if(s[x]%2==0)
        s[x]=s[x]-2;
        else
        s[x]=s[x]+2;
    }
    for(x=0;x<3;x++)
    cout<<" "<<s[x];
}