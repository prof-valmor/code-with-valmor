
#include "function-for-arrays.h"
#include <stdio.h>

void printElementsOf(int array[], int length) {
    printf("\n--------------------------------------------------------\n");
    // to print the elements we need a loop...
    for(int index = 0; index < length; index++) {
        printf(" %d ", array[index]);
    }
    printf("\n--------------------------------------------------------\n");
}

int whatsTheSmallest(int array[], int length, int *response) {
    //to find we need to define a variable to compare the values of the array against and to store the smallest.
    int smallest = 65535 >> 1; // the largest number we can represent with 16 bits. Divided by 2 because int represents also negative #s.

    // Now we can compare, using a loop.
    for(int i = 0; i < length; i++) {   // i is a variable we're using on the loop to index the elements of the array...
        if(array[i] < smallest) {
            smallest = array[i];
        }
        else if(array[i] == smallest) {
            return -1; // to tell the caller function the array has duplicates, for example... :)
        }
    }
    // need to set response:
    *response = smallest; // using * to store the value of smallest into to the variable we received by reference when this function is called.
    return 0; // meaning success.
}

// ordering an array.
void onderingTheArray(int array[], int length, int output[]) {

}

// searching on the array.
// returns 1 if value isn't present on the array, returns 0 otherwhise
int findOnTheArray(int value_to_search, int array[], int length) {
    int index = 0;
    //sequential is not the opitmal... but for a small array it may be fine...
    while(index < length) {
        if(value_to_search == array[index]) return 0;
        index++;
    }
    return 1;
}