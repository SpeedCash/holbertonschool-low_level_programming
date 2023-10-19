#include "main.h"

/**
 * times_table - Write a function that prints the
 * 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int i, j, produit;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            produit = i * j;

            if (j != 0)
            {
                _putchar(' ');
            }

            if (produit < 10)
            {
                if (j != 0)
                {
                    _putchar(' ');
                }
                _putchar(produit + '0');
            }
            else
            {
                _putchar(produit / 10 + '0');
                _putchar(produit % 10 + '0');
            }

            if (j < 9)
            {
                _putchar(',');
            }
        }
        _putchar('\n');
    }
}
