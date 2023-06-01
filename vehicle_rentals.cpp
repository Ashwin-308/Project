#include <iostream>
#include<string>
using namespace std;
class ride
{

public :
    string name;
    int m,c;
    float price;
    float b = 100,d;
    void input();
    void ride_details();
    void calculate1();
    void calculate2();
    void calculate3();
    void calculate4();

};
void ride :: input()
{
     int h,min;
    cout<<"***Welcome to Uzu vehicle rental services***"<<endl;

    cout<<"Enter the type of vehicle you would like to rent"<<endl;
    cout<<"1.Bike"<<endl;
    cout<<"2.Scooter"<<endl;
    cout<<"3.Bicycle"<<endl;
    cout<<"4.Moped"<<endl;
    cin>>c;
    if(c==3||c==4)
    {

    cout<<"Enter the duration for which you would like to rent the vehicle"<<endl;
    cout<<"Enter hours"<<endl;
    cin>>h;
    cout<<"Enter minutes"<<endl;
    cin>>min;
    m = (h*60)+min;
}
else {
        cout<<"Enter the distance you would like to travel";
}
cin>>d;

    switch(c)
    {
    case 1 :

        calculate1();
        break;
    case 2:
        calculate2();

        break;
    case 3:
        calculate3();
        break;
    case 4:
        calculate4();
        break;
    default:
        cout<<"Enter valid choice";


    }
    cout<<"Enter your name :-";
    cin>>name;

}
void ride :: ride_details()
{
    cout<<"****Ride details*****"<<endl;
    cout<<"Name :"<<name<<endl;
    if(c==1)
    {
        cout<<"Vehicle : Bike"<<endl;
        cout<<"Distance travelled : "<<d<<endl;


    }
    if(c==2)
    {
        cout<<"Vehicle : Scooter";
        cout<<"Distance travelled : "<<d;

    }
    if(c==3)
    {

        cout<<"Vehicle : Bicycle";
        cout<<"Duration :"<<m<<endl;
    }
    if(c==4)
    {
        cout<<"Vehicle : Moped";
        cout<<"Duration :"<<m<<endl;
    }

    cout<<"Amount to be paid :"<<price<<endl;
    cout<<"Thank You for using our services";

}
void ride :: calculate1()
{
    if(d<60){
         price = 100;
    }
    else {
        price = 100+(d-60)*2;
    }

}
void ride :: calculate2()
{
    if(d<42){
        price = 100;
    }
    else {
        price = 100+(d-42)*2;
    }
}
void ride :: calculate3()
{
    if(m<=30){
    price = 10;
}
else{
    price = (m/30)*5;
}
}
void ride :: calculate4()
{
    price = 5+(2*(m/60))+(125*(m%60));
}





int main()
{
    ride obj;
    obj.input();
    obj.ride_details();

        return 0;
}

