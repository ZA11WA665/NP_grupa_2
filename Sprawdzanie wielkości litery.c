#include <stdio.h>

int main()
{
    char Znak;
    printf("podaj znak z klawiatury:",Znak);
    scanf("%c",&Znak);
    if (Znak>=65 && Znak<=90)
        printf("podany znak jest wielka litera");
    else
        
        printf("podany znak nie jest wielka litera");
        
    return 0;
}
