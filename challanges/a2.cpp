// modify tea prices Create a program where the user inputs the base 
// price for tea. Use type casting to increase the price by 10% and display 
// the rounded new price using explicit casting.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float teaprice,increasedprice;
    int roundedprice;

    cout<<"Order your tea and state the price"<<endl;
    cin>>teaprice;
    
    // after increasing price by 10%
    increasedprice= teaprice* (1.10);
    cout<<"Total price after some applying taxes:"<<fixed<<setprecision(2)<<increasedprice<<endl;
    

    // price clint have to pay
    roundedprice= (int)increasedprice;
    cout<<"total price you have to pay sir:"<<roundedprice<<endl;
   

    return 0;
}