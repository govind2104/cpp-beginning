#include<iostream>
#include<math.h>
using namespace std;

void even_odd(long long num){
      if(num % 2==0){
        cout<<"The given number is EVEN";
    }else{
        cout<<"The given number is ODD";
    }
}

int main(){

    long long num;

    cout<<"Enter your number : ";
    cin>>num;

  even_odd(num);


    return 0;
}