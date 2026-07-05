// create a program that calculates the total price of teacups. The user
//  inputs the cups they want and the price per cup. The program should calculate
//   the total price , apply a 5% discount if the total is above a certain amount , and show the final price.

#include<iostream>
using namespace std;

int main(){

    int cupsoftea;
    double pricepercup, totalprice, discountedprice;

    cout<<"Enter the number of cups:";
    cin>> cupsoftea;
    cout<<"Enter the price per cup:";
    cin>> pricepercup;

    totalprice = cupsoftea * pricepercup;

    // apply 5% discount if total price is above 100

    if(totalprice > 100){
        discountedprice = totalprice - (totalprice*0.05);
        cout<<"Discounted price is:" <<discountedprice << endl;
    }else{
        cout<<"Total price is:"<<totalprice<< endl;
    }

    return 0;
}