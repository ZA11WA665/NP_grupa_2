#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ilosc, x;
    int suma=0;
    
    printf("Podaj ilosc liczb, ktore chcesz zsumowac: /n");
    scanf("%d",&ilosc);
    
    int tab[ilosc];
    
    for (i=0;i<ilosc;i++)
    {
        printf("Podaj liczbe:");
        scanf("%d",&x);
        suma=suma+x;
    }

    printf("Suma liczb wynosi: %d /n",suma);

    return 0;
}
