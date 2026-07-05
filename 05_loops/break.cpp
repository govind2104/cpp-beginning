#include<iostream>
#include<string>
using namespace std;

int main(){

    string response;

    while(true){
        cout<<"do you want a cup of tea. (yes/no),\n Enter 'stop' if you don't want further cup  of tea to  be delivered.";
        getline(cin,response);
        
        if(response=="stop"){
            break;}

            cout<<"here is your another cup of tea."<<endl;
    
}
return 0;
}