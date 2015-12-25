#include<stdio.h>
 int main()
 {
     float frt,cent;
     printf("Enter the Temperature in Fahrenheit\n");
     scanf("%f",&frt);
     
     cent=5.0/9.0*(frt-32);
    
    printf("\nfahrenheit into centigrade conversion%f",cent);
    printf("Fahrenheit%f",frt);
    printf("Centigrade%f",cent);
    return 0;
    

 }
