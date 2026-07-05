// write a program that keeps serving tea until the user
//  says they've had enough (input 'stop'). use a break
//   statement to exit the loop when the user types 'stop'
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string response;
 do{
    cout<<"Do you want a cup of tea. (yes/no),\n Enter 'stop' if you don't want further cup  of tea to  be delivered.";
    getline(cin,response);

   
        cout<<"please wait, your cup of tea will be served shortly."<<endl;
  } while(response!="stop");
 cout<<"No more tea cups will be served.\n Thankyou for your order."<<endl;
    



    return 0;
}