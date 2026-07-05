#include <iostream>

using namespace std;

int main(){
    
    float teaprice = 49.99;
    int roundedTeaPrice  = (short)teaprice;

    int teaquantity = 4;
    double totalprice = teaprice * teaquantity;

     cout<< roundedTeaPrice <<endl;
     cout<< totalprice <<endl;
    return 0;
}