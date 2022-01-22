#include <stdio.h>

int main ()
{
    int quantity;
    int price = 3500;
    printf("Enter kgs of sugar: ");
    scanf("%i", &quantity);

    int totalPrice = quantity * price;

    printf("Total price of %i kgs of sugar at %i is %i", quantity, price, totalPrice);

    return 0;
}
