#include<iostream>
#include<string.h>
int main(){

    string response;
    while(true){
        cout<<"do you want a cup of tea. (yes/no),\n Enter 'stop' if you don't want further cup  of tea to  be delivered.";
        getline(cin,response);
        
        if(response=="stop"){
            break;}
    
}