// Tea information Display. write a program that declares variables to stores the type of tea, its price per kilogram (float), and its rating(char). 
// use data types effictively and print them in a formatted output using escape sequences.
//     HINT:- use \n for new lines and \" to quote the new name.

#include<iostream>
#include<string>

using namespace std;

int main(){

    string Teaname = "Indian Red Tea \n";
    float priceperkg = 400;
    char rating = 'S';

    cout <<"Name of tea:"<<Teaname <<"\n" ;
    cout <<"Pring of one KG of " <<Teaname<< "is only "<<priceperkg<< "\n\n";
    cout <<"Rating from major group of customers :"<<rating<<endl;


    return 0;
}