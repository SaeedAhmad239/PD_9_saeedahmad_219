#include<iostream>
using namespace std;
main()
{
    string fruit[4];
    fruit[0]="peach";
    fruit[1]="Apple";
    fruit[2]="Guava";
    fruit[3]="Watermalon";
    int price[4]={60,70,40,30};
    string Fruit_Name;
    int Total_Price=0, Quantity;
    cout<<"Enter name of fruit: ";
    cin>>Fruit_Name;
    cout<<"Enter quantity in kg";
    cin>>Quantity;
    for(int x=0;x<4;x++)
    {
        if(fruit[x]==Fruit_Name)
        {
            Total_Price=price[x]*Quantity;
            x=5;
        }
    }
    cout<<Total_Price;
}
