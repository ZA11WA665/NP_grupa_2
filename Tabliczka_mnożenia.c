#include<stdio.h>
#include <stdlib.h>

main()
{
    printf("Tabliczka mnozenia\n");
    printf("\t");
    for(int k = 1; k <= 10; k++)
    {
        printf("|%d| \t", k);
    }
    printf("\n");
    for(int i=1;i<=10;i++)
        {
        printf("|%d|", i);
        printf("\t");
        for(int j=1;j<=10;j++)
        {
        printf("%d \t",(i*j));
        }
        printf("\n");
    }

        return 0;
}