// WHILE LOOP
// write a program that keeps track of tea orders. Each time a 
// cup of tea is made, decrease the number of tea remaining .
// the loop should run until all cups are served.

#include<iostream>
using namespace std;

int main(){
    int teacups;

    cout<<"Enter the number of tea cups to serve";
    cin>>teacups;

    while(teacups>0){
        teacups-=1;
        cout<<"serving cup of tea.\n"<<teacups<<" remaining"<<endl;

    }
     cout<<"All teacups are served."<<endl;

    return 0;
}