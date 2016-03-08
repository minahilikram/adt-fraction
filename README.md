# adt-fraction

> Fractin

[Fraction](https://en.wikipedia.org/wiki/Fraction_(mathematics)) implemented using pointers based on C Algorithms for application of fractions.

> Fraction ADT creates, adds and multiplies a fraction. 

## Install

```sh
$ git clone https://github.com/minahilikram/adt-fraction
```

## Usage

```c
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
```

## Limitations

Fractions will not be put into lowest terms. 

### Example

Code does not work if decimals are put in, input has to be in fractions.