// Relational and logical operators 
// A tea subscription service offers a discount if the user buys more 
// than 12 cups or if they are a member for more than a year . Write a program
// that checks if the user qualifies for a  discount based on their input.

#include<iostream>

using namespace std;
int main(){

    int cupsoftea;
    bool ismember;

    cout<<"Enter the cups of tea you want to order: ";
    cin>>cupsoftea;

    cout<<"are You a member for more than 1 year(1 for yes , 0 for no)? :";
    cin>>ismember;

    if(cupsoftea >12 || ismember){
        cout<<"You are ELIGIBLE for discount on subscription offer."<<endl;
    }else{
        cout<<"you are NOT eligible for any discount."<<endl;
    }


    return 0;
}