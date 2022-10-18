#include <cs50.h>
#include <stdio.h>


int main(void)

{
    long long number_card, cc, divisor = 10;
    int soma1 = 0, soma2 = 0, somat = 0, cont = 0;

    do

    {

        printf("Insira o número do cartão de crédito: \n");
        scanf("%lld", &number_card);

    }

    while (number_card <= 0); //PRIMEIRO PASSO

    cc = number_card;

    while (cc > 0)
    {
        int ultimodig = cc % 10;
        soma1 = soma1 + ultimodig;
        cc = cc / 100;
    }

    cc = number_card / 10;

    while (cc > 0)
    {
        int ultimodig = cc % 10;
        int mult = ultimodig * 2;
        soma2 = soma2 + (mult % 10) + (mult / 10);
        cc = cc / 100;
    }

    somat = soma1 + soma2;
    cc = number_card;

    while (cc != 0)
    {
        cc = cc / 10;
        cont++;
    }

    for (int i = 0; i < cont - 2; i++)
    {
        divisor = divisor * 10;
    }

    int primeirodig = number_card / divisor;
    int doisprimeiros = number_card / (divisor / 10);

    if (somat % 10 == 0)

    {
        if(cont == 15)
        {
            if (doisprimeiros == 34 || doisprimeiros == 37)
            printf ("AMEX\n");
            else
            printf ("INVALID\n");

        }
        else if (cont == 16)
        {
            if (doisprimeiros > 50 && doisprimeiros < 56)
            printf ("MASTERCARD\n");

            else if (doisprimeiros > 39 && doisprimeiros < 50)
            printf ("VISA\n");

            else printf ("INVALID\n");

        }

        else if (cont == 13)
        {
            if (doisprimeiros > 39 && doisprimeiros < 50)
            printf ("VISA\n");

            else printf ("INVALID\n");

        }
        else

        printf ("INVALID\n");



    }

    else

    {
        printf ("INVALID\n");

    }

}