#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main(){

    int r;
    scanf("%d",&r);
    float area=0;
    area = PI*r*r;
    printf("Area of Circle : %.3f", area);
    return 0;
}
