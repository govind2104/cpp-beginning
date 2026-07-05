#include<iostream>

using namespace std;

int main(){

    int teabags;

    cout<<"Enter the amount of teabags you have:";
    cin>>teabags;

    if(teabags<10){
       teabags+=5;
       cout<<"the total teabags you have ="<<teabags<<endl;
    }else{
       cout<<"the total teabags you have ="<<teabags<<endl;
    }




    return 0;
}