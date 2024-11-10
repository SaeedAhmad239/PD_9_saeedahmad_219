#include<iostream>
using namespace std;
main()
{
    string movies[5];
    int x,price;
    movies[0]="Gladitor";
    movies[1]="Star War";
    movies[2]="Terminator";
    movies[3]="Taking Lives";
    movies[4]="Tomb Rider";
    string Movie_Name;
    cout<<"Enter movie name";
    cin>>Movie_Name;
    for(x=0;x<5;x++)
    {
        if(movies[x]==Movie_Name)
        {
        if(x%2==0)
        price=500-(10*500)/100;
        else
        price=500-(5*500)/100;
        x=5;
        }


    }
    cout<<price;
}
