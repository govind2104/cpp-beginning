// SWITCH CASE 
// Challange: Write a program that lets the user select a tea type from a menu.
//           Use a switch statement to display the price based on the selected 
//           tea.*Green Tea:$2
//               *Lemon Tea:$3
//               *Oolong Tea:$4
#include <iostream>
using namespace std;

int main(){

    int choice;
    double price;

    cout<<R"(select your Tea:
              1.Green Tea
              2.Lemon Tea
              3.Oolong Tea
              Enter your choice.)";

    cin>>choice;

    switch(choice){

        case 1:
             price=2.0;
             cout<<"You selected green tea. price:"<<price<<endl;
             break;
        case 2:
             price=3.0;
             cout<<"You selected lemon tea. price:"<<price<<endl;
             break;
        case 3:
             price=4.0;
             cout<<"You selected oolong tea. price:"<<price<<endl;
             break;
        default:
             cout<<"Invalid Choice"<<endl;
             break;
            

    }

    return 0;
}