#include <stdio.h>

// PARAMETROS: CANTIDAD LIMITE DEL PRESTAMO DIVIDIDO EN 1000000
int get_amount(int limit)
{
    int amount;

    printf("¿Cuanto dinero necesitas? \n");
    scanf("%d", &amount);

    if (amount <= limit * 1000000)
    {
        return amount;
    }
    else
    {
        printf("El monto tope de préstamo maximo es de %i millones \n", limit);
        get_amount(limit);
    }
    return 0;
}
// PARAMETROS: MONTO, TASA ALTA, TASA BAJA, LIMITE PARA COBRAR TASA ALTA
float get_amount_with_credit_rate(int amount, float rate1, float rate2, int rate1_amount_limit)
{
    if (amount < rate1_amount_limit * 1000000)
    {
        return amount + (amount * rate1);
    }
    else
    {
        return amount + (amount * rate2);
    }
}

int main()
{

    int credit_type;

    printf("Bienvenido al banco de las islas Caimán \n");
    printf("Que tipo de credito desea (ingrese un unico numero del 1 - 3): \n");
    printf("1 - Hipotecario \n");
    printf("2 - Libre Inversión \n");
    printf("3 - Especial \n");
    scanf("%d", &credit_type);

    float amount = 0;

    switch (credit_type)
    {
    case 1:
        amount = get_amount(200);                                      // CANTIDAD LIMITE DEL PRESTAMO DIVIDIDO EN 1000000
        amount = get_amount_with_credit_rate(amount, 0.05, 0.04, 100); // MONTO, TASA ALTA, TASA BAJA, LIMITE PARA COBRAR TASA ALTA
        printf("La cantidad de tu prestamo junto con los intereses es de: %f", amount);
        break;
    case 2:
        amount = get_amount(15);                                     // CANTIDAD LIMITE DEL PRESTAMO DIVIDIDO EN 1000000
        amount = get_amount_with_credit_rate(amount, 0.08, 0.06, 5); // MONTO, TASA ALTA, TASA BAJA, LIMITE PARA COBRAR TASA ALTA
        printf("La cantidad de tu prestamo junto con los intereses es de: %f", amount);
        break;
    case 3:
        amount = get_amount(35);                                     // CANTIDAD LIMITE DEL PRESTAMO DIVIDIDO EN 1000000
        amount = get_amount_with_credit_rate(amount, 0.1, 0.08, 20); // MONTO, TASA ALTA, TASA BAJA, LIMITE PARA COBRAR TASA ALTA
        printf("La cantidad de tu prestamo junto con los intereses es de: %f", amount);
        break;
    default:
        printf("Tu elección no es valida");
        break;
    }

    return 0;
}