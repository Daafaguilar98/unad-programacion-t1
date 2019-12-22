#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_amount();
void limit_amount();
int main()
{

    int credit_type;

    printf("Bienvenido al banco de las islas Caimán \n");
    printf("Que tipo de credito desea (ingrese un unico numero del 1 - 3): \n");
    printf("1 - Hipotecario \n");
    printf("2 - Libre Inversión \n");
    printf("3 - Especial \n");
    scanf("%d", &credit_type);

    switch (credit_type)
    {
    case 1:
        get_amount();
        break;
    case 2:
        get_amount();
        break;
    case 3:
        get_amount();
        break;
    default:
        printf("Tu elección no es valida");
        break;
    }

    return 0;
}
int get_amount(int limit)
{
    int amount;
    
    printf("¿Cuanto dinero necesitas? \n");
    scanf("%d", &amount);

    if (amount <= limit)
    {
        return amount;
    }
    else
    {
        printf("El monto tope de préstamo es de %i millones", limit);
        get_amount(limit);
    }

}