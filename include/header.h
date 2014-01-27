typedef struct {
	int integer;
	int numerator;
	int denominator;
} fraction;

/*Preconditions: None
Postconditions: Returns fraction to main*/
fraction * createFraction(int numerator, int denominator);

/*Preconditions: Gets temporary fraction
Postconditions: Returns numerator*/
int getNumerator(fraction * temporaryFraction);

/*Preconditions: Gets temporary fraction
Postconditions: Returns denomnator*/
int getDenominator(fraction * temporaryFraction);

/*Preconditions: Gets both fractions
Postconditions: Returns answer*/
fraction * add(fraction * fractionOne, fraction * fractionTwo);

/*Preconditions: Gets both fractions
Postconditions: Returns answer*/
fraction * multiply(fraction * fractionOne, fraction * fractionTwo);

/*Preconditions: Gets fractions to destroy
Postconditions: None*/
void destroyFraction(fraction * myFraction);
