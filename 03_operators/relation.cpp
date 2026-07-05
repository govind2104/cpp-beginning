// A teashop offers a loyality program. customers who buy more than 20 cups of tea gets 
// a special "Gold" badge, and those who buy 10 to 20 cups gets a "silver" badge. Write 
// a program to display the badge they will receive based on the number of cups they buy.

#include<iostream>
using namespace std;

int main(){

    int numofcups;

    cout<<"How many cups of tea do you want?  :";
    cin>>numofcups;

    if(numofcups > 20){
        cout<<" Congrats Sir, you earned a \"GOLD\" badge along with your tea ."<<endl;

    }else if(numofcups> 10 && numofcups<=20){
        cout<<" Congrats Sir, you earned a \"SILVER\"badge along with your tea ."<<endl;
    }else{
        cout<<"Thanks for your order, Sir."<<endl;
    }


    return 0;
}