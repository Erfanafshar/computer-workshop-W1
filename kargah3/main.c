#include <stdio.h>
#include <stdlib.h>

int main(){
    int number=264728;
    int a=0,b=0,c=0,d=0,e=0,f=0;
    int number2=number;
    a=number2%10;
    number2/=10;
    b=number2%10;
    number2/=10;
    c=number2%10;
    number2/=10;
    d=number2%10;
    number2/=10;
    e=number2%10;
    number2/=10;
    f=number2%10;
    number2/=10;
    printf("Reverse of %d is : %d%d%d%d%d%d",number,a,b,c,d,e,f);
}
