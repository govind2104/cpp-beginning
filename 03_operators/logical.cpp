// Create a program that checks if a user is eligible for a tea subscription discount.
//  The discount applies if the user is either a student or has purchased more than 15 cups.
//   Ask the user to imput their status (/student or not ) and their cup count.

#include<iostream>
using namespace std;

int main(){

    int cupsoftea;

    cout<<"How many cups of tea do you want:";
    cin>> cupsoftea;

    bool isstudent;
    cout<<"Are you a student (1 for yes and 0 for no)?";
    cin>>isstudent;

    if(isstudent || cupsoftea >=15){
        cout<<"You are eligible for tea susbcription"<<endl;
    }else{
         cout<<"You are NOT eligible for tea susbcription"<<endl;
    }



    return 0;
}