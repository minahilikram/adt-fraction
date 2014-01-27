#include <stdio.h>
#include "header.h"
#include <stdlib.h>

fraction * createFraction(int numerator, int denominator) {

    fraction * temporaryFraction;

    temporaryFraction = malloc(sizeof(fraction));

    temporaryFraction->numerator = numerator;   /*Saves the numerator*/
    temporaryFraction->denominator = denominator;    
    
    return (temporaryFraction);
}

int getNumerator(fraction * temporaryFraction) {

    return (temporaryFraction->numerator);

}

int getDenominator(fraction * temporaryFraction) {

    return (temporaryFraction->denominator);

}

fraction * add(fraction * fractionOne, fraction * fractionTwo) {

    fraction * addResult;
    int resultOne, resultTwo;
    
    addResult = malloc(sizeof(fraction));
    
    addResult->denominator = fractionOne->denominator * fractionTwo->denominator; /*Finds common denominator*/
    
    resultOne = fractionTwo->denominator * fractionOne->numerator;
    resultTwo = fractionOne->denominator * fractionTwo->numerator;
    
    addResult->numerator = resultOne + resultTwo;   /*Finds the new numerator*/

    return (addResult);
}

fraction * multiply(fraction * fractionOne, fraction * fractionTwo) {

    fraction * multiplyResult;
    
    multiplyResult = malloc(sizeof(fraction));
    
    multiplyResult->numerator = fractionOne->numerator * fractionTwo->numerator;    /*Finds new nmerator*/
    multiplyResult->denominator = fractionOne->denominator * fractionTwo->denominator;  /*Finds new denominator*/

    return (multiplyResult);
}

void destroyFraction(fraction * myFraction) {

    free(myFraction);
    
}
