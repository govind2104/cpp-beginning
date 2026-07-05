// Favourite tea input. Write a program that takes the user's 
// favourite tea as input using getline and also asks how many
//  cups of tea they want using cin. Display the result in a fun message.

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string favtea;
    int cupsoftea;

    cout<<"tell us your favourite tea sir:";
    getline(cin, favtea);

    cout<<"How many cups of tea do you want?"<<endl;
    cin>>cupsoftea;

    cout<<"the favourite tea of Mr.XYZ is :"<<favtea<<"\n He wants "<< cupsoftea << " cups of that tea "<<endl;

    return 0;
}