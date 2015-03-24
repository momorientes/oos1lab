#include <math.h>
#include <stdio.h>
int basis, exponent;
int main(void) {
    printf("\nBasis = ");
    scanf ("%d", &basis);
    printf("\nExponent = ");
    scanf("%d", &exponent);
    printf ("\nErgebnis: \n");
    printf ("\n%d^%d = %d\n", basis, exponent,
    int(pow(double(basis), double(exponent))));
    return 0;
}
