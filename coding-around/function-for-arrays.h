//to ptotect when including multiple times.
#ifndef _ARRAYFUNCS_
#define _ARRAYFUNCS_

void printElementsOf(int array[], int length);
/** returns -1 if the array has duplicates. */
int whatsTheSmallest(int array[], int length, int *response);

// ordering an array.
void onderingTheArray(int array[], int length, int output[]);

// searching on the array.
// returns 1 if value isn't present on the array, returns 0 otherwhise
int findOnTheArray(int value_to_search, int array[], int length);

#endif