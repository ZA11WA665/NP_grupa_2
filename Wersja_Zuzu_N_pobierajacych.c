#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    int lic;

    printf("Podaj ilosc liczb: \n");
    scanf("%d", &x);

    printf("Podaj liczby, ktore chcesz zsumowac: \n");

    while(x--)
    {
        scanf("%d", &lic);
        sum += lic;
    }

    printf("%d\n", sum);

    return 0;
}
