#include<iostream>
#include<cmath>

using namespace std;

int main(){
cout<<"hello chai from Govind";

float teaprice,totalprice;
int teaquantity;

cout<<"Enter the price of tea:"<<endl;
cin>>teaprice;

cout<<"Enter the amount of cup you want:"<<endl;
cin>>teaquantity;

totalprice=teaprice*teaquantity;

cout<<"The total price you have to pay is :"<<round(totalprice)<<endl;

return 0;



} 