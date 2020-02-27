#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int seporde=1000000, sood=20, sal=3;
    int i=0;
    for (i=0;i<sal;i++)
        seporde += (sood/100.0)*seporde;
    printf("Seporde bad az %d saal = %d",sal,seporde);
    return 0;
}
