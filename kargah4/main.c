#include <stdio.h>
#include <stdlib.h>

int main(){
    float f1=40,c1;
    float f2,c2=260;
    c1=(f1-32)*5/9;
    f2=c2*9/5+32;
    printf("%f Fahrenheit is %f Celsius\n",f1,c1);
    printf("%f Celsius is %f Fahrenheit",c2,f2);
    return 0;
}
