// write a program that allows a user to input the number of teabags they have.Assign additional bags
// to them based on certain conditions (eg., if they have fewer than 10 bags , give them 5 extra). Update the original
// number using assignment operators.

#include <iostream>
using namespace std;

int main(){

    int teabags;

    cout<<"Enter number of teabags you have:";;
    cin>>teabags;

    // if number of teabags less than 10, giving 5 extra.

    if(teabags <10){

        teabags +=5;
        cout<<"number of teabags:"<<teabags << endl;
    }else{
        cout<<"number of teabags:"<<teabags<< endl;
    }


    return 0;
}