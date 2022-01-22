#include <stdio.h>

int main() {
    // Scientific notation

    /* Convertions characters
       _________________________
       %f - Decimal notation => 4.32000
       %e - Scientific notation => 4.32e5
       %g - Computer decides => if the size of the exponet is < -4 :=> 4.32e5
                                else if the exponet is > 5 :> 4.32000
    */
    printf("How many puppies do you have: ");
    double puppies;
    scanf("%lf", &puppies);

    printf(" Decimal => %f\n Scientific => %e\n Computer => %g", puppies, puppies, puppies);

    return 0;
}
