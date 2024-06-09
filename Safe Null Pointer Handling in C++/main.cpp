#include <iostream>
using namespace std;

bool isPointerNull(int* ptr) {
    // Your code here
    int Status = 0;
    if (ptr == nullptr ){

        Status = true;
    }
    else Status = false;


    return Status;
}


void overloadedFunction(int val){
// Your code here
    cout << "Integer Value"<<endl ;
}
void overloadedFunction(int*ptr){
// Your code here
 cout << "Pointer Value"<<endl ;

}


int main() {
    int* ptr0 = 0;
    int* ptrNULL = NULL;
    int* ptrNullptr = nullptr;
    int value = 10;

    cout << "Testing isPointerNull function:" << endl;
    cout << "ptr0 is null: " << isPointerNull(ptr0) << endl;
    cout << "ptrNULL is null: " << isPointerNull(ptrNULL) << endl;
    cout << "ptrNullptr is null: " << isPointerNull(ptrNullptr) << endl;

    cout << "\nTesting overloadedFunction function:" << endl;
    overloadedFunction(value);
    overloadedFunction(ptr0);
    overloadedFunction(ptrNULL);
    overloadedFunction(ptrNullptr);

    return 0;
}