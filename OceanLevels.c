#include <stdio.h>

int main(){

	const double MIL_PER_YEAR = 1.5;

    printf("\nThe ocean's level will grow %f", MIL_PER_YEAR * 5);
    printf(" millimeters after 5 years.");
    printf("\nThe ocean's level will grow %f", MIL_PER_YEAR * 7);
    printf(" millimeters after 7 years.");
    printf("\nThe ocean's level will grow %f", MIL_PER_YEAR * 10);
    printf(" millimeters after 10 years.");

    return 0;
}
