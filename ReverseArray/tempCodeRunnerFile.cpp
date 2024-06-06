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
    for (int i = 0 ; i <0 ; i++){

        cout << arr[i] <<" "<<endl;

    }
}


void doubleValues(int arr[], int size) {
    // Your code here

    for (int j = 0 ; j < size ; j++){
     int & Ref = arr [j];
     Ref *= 2;   
     cout <<  arr [j] <<" ";
    }
   
}

int main (void){
    int arr [5] = {5,4,3,2,1};
    int Size = 5 ;
    doubleValues (arr , Size   );
    reverseArray (arr , Size   );




    return 0;
}