#include <stdio.h>
main() {
    double a,b,c ;
    printf("Input number : ");
    scanf("%ld%ld%ld",&a,&b,&c) ;
    double max = a+b ;
    if(a+c>max){
        max= a+c ;
        if(b+c>max)
        max= b+c ;
    }
    printf("sum = %ld",max);
}