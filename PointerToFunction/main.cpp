#include <iostream>
using namespace std;


void Add  ( int x , char y)
{

    for (int Index = 0 ; Index < x ; Index++ ){

        cout << y <<" ";
    
    
    }

}

int main (void){
    
    void (* F_PTR) (int , char) ;

    F_PTR = Add;
    F_PTR (5,'y');
    cout << (void *)F_PTR;



    return 0;
}