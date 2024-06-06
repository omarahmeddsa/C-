#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;



namespace Avg {

    void Add (int x, int y){
        int result = 0;

        result = x + y;
        cout << result << endl ;



    }

    int F = 10;
}


int main (void) {
    using namespace Avg;
    int x = 0;
 
    Add (5 , 6);
    x = F + 5 ;

    cout << x ;
    

    return 0;
}