#include<stdio.h>
 int main()
 {
     float l,b,r,ar1,prmt,ar2,circum,pi=3.14;
     printf("Enter the length and breath of the Rectangle\n");
     scanf("%f%f",&l,&b);
     ar1=l*b;
     prmt=2*l+2*b;
      printf("\n\nArea of the Rectangle%f",ar1);
      printf("\n\nPerimeter of the Rectangle%f",prmt);
      
      printf("\nEnter the redius of the Circle\n");
      scanf("%f",&r);
      ar2=pi*r*r;
      circum=2*pi*r;
      printf("\n\nArea of the Circle%f",ar2);
      printf("\n\nCircumference of the Circle%f",circum);
       
       return 1;
 }

