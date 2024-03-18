#include <stdio.h>
#include <stdlib.h>

void convertdolars(float euro); // declaration of the function;

int main()
{
	float euro1; // only a variable;
	printf("enter euro:");
	scanf("%f", &euro1);
	convertdolars(euro1); // euro1 is the argument.

	return 0;	// end
}

void convertdolars(float euro) // euro is the argument, float is it's type.
{
	float dolar;
	dolar=0.9181*euro; // the main algoritm;
	printf("%.3f euros = %.3f dolars", euro, dolar); //%.3f => only 3 decimals will appear.
	return; // return to the main function;
}
