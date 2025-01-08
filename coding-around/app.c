//playing around with functions... and arrays.
#include "function-for-arrays.h" //this is my library...
#include <stdio.h>

void main() {
    // let say I have an array of integer numbers:
    int array[10] = {5, 15, 14, 4, 30, 2000, -90, 20, -20, 0};
    int theSmallest = 0; // Here I want to store the smallest of the array...
    // and I want to print the elements of it, 
    printElementsOf(array, 10); // need to pass the array and its length.
    // and I want to find the smallest number of it... and print it.
    int success = whatsTheSmallest(array, 10, &theSmallest); // here using a pointer to a variable to be loaded with the smallest number. Return is -1 in case of failure.
    if(success == 0) 
        printf("\n\n --> The smallest number on the array is: %d <-- \n\n", theSmallest);
    else {
        printf("\n\n --> There are duplicates on the array. Pls review its content. <-- \n\n");
    }
    //
    success = findOnTheArray(-209, array, 10);
    if(success == 0) {
        printf("\n\n --> The value was found <-- \n\n");
    }
    else {
        printf("\n\n --> The value was NOT found <-- \n\n");
    }

} 