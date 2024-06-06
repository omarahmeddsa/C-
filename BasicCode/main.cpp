#include <iostream>

using namespace std;

int main() {

    int x =50;
    int &Ref = x;
    char str [512] = "Mr";
    char Str_1 [512] = {0}; // Direct
    char Str_2 [9] {"Engineer"}; //uniform Initialzation note that uniform is better with user Defined Types
    auto Var = 2.5;
    cout<< "Enter your name\n";
    cin.getline(Str_1,500, '\n'); // Takes String with spaces as input
    cout << str << " " << Str_1<<" "<<Str_2 <<endl;
    cout<< "Entre X\n";
    cin >> x;
    cout << Var << endl;

    
    

    


    return 0; 
}