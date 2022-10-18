#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float reais;
    do
    {
        reais = get_float ("Quanto dinheiro é devido: ");

    }
    while (reais <= 0);

    int centavos = round(reais * 100);
    int centmin;
    int um = 1;
    int cinco = 5;
    int dez = 10;
    int vc = 25;
    int total = 0; // TOTAL DE MOEDAS

    centmin = centavos;

    while (centmin >= vc)
    {
       centmin = centmin - vc; total++;
    }

    while (centmin >= dez)
    {
        centmin = centmin - dez; total++;
    }

    while (centmin >= cinco)
    {
        centmin = centmin - cinco; total++;
    }

    while (centmin >= um)
    {
        centmin = centmin - um; total++;
    }

    printf ("%i \n", total);

}