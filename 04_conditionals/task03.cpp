// NESTED IF-ELSE
// challange:A tea shop offers discounts based on the number of tea 
// cups ordered. Write a program that checks the number of cups ordered 
// and applies a discount:*More than 20 cups: 20% discount.
//   *between 10 and 20 cups :10% discount
//   *less than 10 cups : no discount
#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int cupsordered;
    double pricepercup=19.99,totalprice;

    cout<<"Enter the number of cup of tea you want to order sir :";
    cin>>cupsordered;

    totalprice=pricepercup*cupsordered;

    if(cupsordered>20){
        float discountedprice= 0.8*totalprice;
        cout<<"The total price you have to pay is :"<<fixed<<setprecision(2)<< discountedprice<<endl;
    
    }else if(cupsordered>=10 && cupsordered<=20){
        float discountedprice= 0.9*totalprice;
         cout<<"The total price you have to pay is :"<<fixed<<setprecision(2)<< discountedprice<<endl;
    }else{
         cout<<"The total price you have to pay is :"<<fixed<<setprecision(2)<<totalprice<<endl;
    }


    return 0;
}