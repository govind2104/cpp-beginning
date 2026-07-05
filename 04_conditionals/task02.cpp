// IF-ELSE STATEMENT
// Challange:Write a program that checks if a tea shop is open 
// if the current hour (input by the user) is
//  between 8 AM and 6 PM, the shop is open; otheerwise,it's closed.

#include<iostream>
using namespace std;
int main(){

    int hour;

    cout<<"Enter the current hour.(0 to 23 hours).: ";
    cin >>hour;

    if(hour>=8 && hour<=18){
        cout<<"The shop is open."<<endl;
    }else{
        cout<<"the shop is closed"<<endl;
    }


    return 0;
}