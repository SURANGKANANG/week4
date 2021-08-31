#include<stdio.h>
int main(){
double number[1000]; 
    printf("Input number : ");
    scanf("%ld%ld%ld",&number[0],&number[1],&number[2]);
    double max = number[0] ;
    double min = number[0];
    for(int i=0;i<3;i++){
        if(number[i]>max){
           max= number[i] ;
           if(number[i]<min) 
           min = number[i];          
        }
    }
	double mini = number[0];
    for(int i=0;i<3;i++){
        if(number[i]<max && number[i]>min){
           mini= number[i] ; 
			}
		}
    
 printf("sum = %.2ld ",max+mini);
}