#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main() {
    
    fraction * fractionOne;
    fraction * fractionTwo;
    fraction * addResult;
    fraction * multiplyResult;
    int numer, denom;


    fractionOne = createFraction (1, 4);
    fractionTwo = createFraction (1, 4);
    
    addResult = add(fractionOne, fractionTwo);
    numer = getNumerator(addResult);
    denom = getDenominator(addResult); 
    printf("Addition Answer: %d/%d\n", numer, denom);
    
    multiplyResult = multiply(fractionOne, fractionTwo);
    numer = getNumerator(multiplyResult);
    denom = getDenominator(multiplyResult);
    printf("Multiplication Answer:%d/%d\n", numer, denom);
    
    destroyFraction(fractionOne);
    destroyFraction(fractionTwo);
    destroyFraction(addResult);
    destroyFraction(multiplyResult);
    
    return 0;
}
