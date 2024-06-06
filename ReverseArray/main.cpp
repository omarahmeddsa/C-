#include <iostream>
using namespace std ;
void reverseArray(int arr[], int size) {
    
    int * ptr_Start = arr;
    int * ptr_End = (arr + size-1);
    int temp = 0;
    // Your code here
    for (int Index_1 = 0 ; Index_1 < size /2 ; Index_1++){
        
        
          temp = *(ptr_Start + Index_1);    
         *(ptr_Start + Index_1)  = * (ptr_End - Index_1);
         * (ptr_End - Index_1) =temp;
        
    }

}


void doubleValues(int arr[], int size) {
    // Your code here

    for (int j = 0 ; j < size ; j++){
     int & Ref = arr [j];
     Ref *= 2;   
    
    }
   
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Test case for reverseArray
    cout << "Original array 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    reverseArray(arr1, size1);

    cout << "Reversed array 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Test case for doubleValues
    cout << "Original array 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    doubleValues(arr2, size2);

    cout << "Doubled array 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
