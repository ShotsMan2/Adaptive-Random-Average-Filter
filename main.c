#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, sayi, sum, ort;

    sum = 0;

    printf("n i girin ");
    scanf("%d", &n);

    int array[n];

    srand(time(NULL));

    for (i = 1; i <= n; i++)
    {
        sayi = rand() % 101;
        printf("%d \n", sayi);

        array[i - 1] = sayi;
        sum += sayi;
    }
    ort = sum / n;
    printf("ortalama: %d", ort);

    for (i = 0; i <= n - 1; i++)
    {
        if (array[i] < ort)
        {
            do
            {
                sayi = rand() % 101;
            } while (sayi <= ort);

            array[i] = sayi;
        }
    }

    printf("\n");

    for (i = 0; i <= n - 1; i++)
    {
        printf("%d \n", array[i]);
    }
}
