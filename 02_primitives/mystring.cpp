#include<iostream>
#include <string>

using namespace std;

 int main(){

    string favtea = "Lemon Tea \n ";
    string description = "known as \"best\" tea";
    
    cout << favtea <<description <<endl;

    string usertea;
    int teaquantity;

    cout <<"What would you like to order in tea, Sir?\n";
    getline(cin, usertea);

    //ask for quantity

    cout <<"How many cups of "<<usertea<<"Would you like to have, Sir?";
    cin >> teaquantity;

    cout<< teaquantity;
    cout <<usertea;


 return 0;
 }