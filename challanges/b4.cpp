// Bitwise operators 
// Write a program that uses bitwise AND(&) to check which type of tea are in stock.
// The stock is encoded in an integer (1 for green , 2 for Black, 4 for oolong).
// Allow the user to check avaibility by inputing the tea type (1,2, or 4),and display
// a message saying whether that tea is in stock or not.

#include <iostream>
using namespace std;
int main(){

    const int greentea = 1;
    const int blacktea = 2;
    const int oolongtea = 4;

    int usertea;

    int stocktea = 6;

    cout<<"choose your preffered tea:\n"
           "select 1 for greentea.\n"
           "select 2 for blacktea.\n"
           "select 4 for oolongtea.";

    cin>>usertea;


    if((usertea & stocktea)!= 0){
        cout<<"your preffered tea is in stock"<<endl;
    }else{
        cout<<"your tea is NOT in stock"<<endl;
    }

    return 0;
}