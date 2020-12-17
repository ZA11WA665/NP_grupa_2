#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l;
    int s=0, i=0;
    printf("Podaj ilosc liczb \n");
    scanf("%d",&n);
    
    while(i<n)
        {
        printf("Podaj liczbe \n");
        scanf("%d",&l);
        s=s+l;
        i++;
        }
        
    printf("Suma tych liczb wychodzi %d",s);
    return 0;
}
