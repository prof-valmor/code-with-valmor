#include <stdio.h>
// Let's modify the function to return any element on the array...
// whichONe to pick, the array, and its length.
// -1 in case of error or 0 if okay.
int pickOneOf(int whichOne, int array[], int length, int *theOne); // unlike other programming languages, in C we don't know the number of elements on an array... so we pass the length as argument.

void main() {
    // my code starts here... 
    // Pick the second number on a set of numbers...
    // 34, 10, 5, 100, 200

    printf("\nPICK a NUMBER\n");
    int setOfNumbers[5] = {34, 345, 5, -1, 200}; // it's an array for int numbers ... 
    int theNumber = 0;
    int response = 0;

    response = pickOneOf(7, setOfNumbers, 5, &theNumber); // five because we know the array has 5 elements... 3 because we want to print the 3rd.
    if(response == 0) {
        printf("\nThe number is %d \n ", theNumber);
    }
    else {
        printf("\nThere was an error %d \n ", response);
    }
}//end of main().

//implementing the function, so the compiler knows what `pickOneOf` is.
// -1 in case of error and 0 if it's okay.
int pickOneOf(int whichOne, int array[], int length, int *theOne) {
    //let's check if we're picking one element from whithin the array.. 
    if(whichOne < length) {
        *theOne = array[whichOne];
        return 0;
    }
    
    return -1; 
}//end of the function.
