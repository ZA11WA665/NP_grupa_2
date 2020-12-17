#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l;
    int s=0;
    printf("Podaj ilosc liczb \n");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("Podaj liczbe \n");
        scanf("%d",&l);
        s=s+l;}
    printf("Suma tych liczb wychodzi %d",s);
    return 0;
}
