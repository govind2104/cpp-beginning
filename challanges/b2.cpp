// Assignment OPERATORS
// Create a progam where the user inputs the number of tea bags they have.
// If the number is less than 20, give them 10 extra bags using the +=
// assignment operator .Display the updated total.

#include<iostream>

using namespace std;

int main(){
    int teabags,totalbags;

    cout<<"Enter the number of teabags you have:";
    cin>>teabags;

    if(teabags<20){
        teabags+=10;
        cout<<"the updated total teabags you have :"<<teabags<<endl;
    }else{
        cout<<"the total teabags you have :"<<teabags<<endl;
    };


    return 0;
}