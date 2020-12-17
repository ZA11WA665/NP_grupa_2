#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ilosc, x;
    int suma=0;
    
    printf("Podaj ilosc liczb, ktore chcesz zsumowac: /n");
    scanf("%d",&ilosc);
    
    int tab[N];
    
    for (i=0;i<N;i++)
    {
        printf("Podaj liczbe:");
        scanf("%d",&x);
        suma=suma+x;
    }

    printf("Suma wynosi: %d /n",suma);

    return 0;
}
