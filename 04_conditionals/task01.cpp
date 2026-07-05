// IF STATEMENT
// challange: Write a program that checks if the user wants to order
//  green tea. if the user types "green tea",the program should confirm the order.

#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string teaname;

cout<<"Enter the name of tea you want to order, Sir:";
getline(cin, teaname);
    

  if(teaname== "green tea"){
    cout<<"Your order is comnfirmed.please wait for a while."<<endl;
  } 


return 0;
}