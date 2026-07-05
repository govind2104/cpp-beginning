// Arithmetic operators
// Write a program that calculates the price of tea packs.
// A user enters the number of tea packs they want, and the price 
// per pack. Apply a 10% tax to the total price and display the final cost.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    float numofteapacks, priceperpack, totalprice, Finalcost;

    cout<<"please enter the number of tea packs you want : ";
    cin>>numofteapacks;

    cout<<"enter the price per pack of tea you chose : ";
    cin>>priceperpack;

    totalprice = numofteapacks*priceperpack;

    // after applying 10% discount to the total price.

    Finalcost = totalprice - totalprice*(0.1);

    cout<<"The final cost of your teapacks is "<<fixed<<setprecision(2)<<Finalcost<<endl;


   return 0;
}