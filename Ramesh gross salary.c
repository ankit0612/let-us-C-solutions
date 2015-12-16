#include<stdio.h>
    int main()
    {
        float da,bs,hra,grs;
        printf("Enter Ramesh basic salary\n");
        scanf("%f",&bs);
        da=0.4*bs;
        hra=0.2*bs;
        grs=da+bs+hra;
        printf("\nRamesh gross salary%f",grs);
        printf("basic salary of the Ramesh%f",bs);
        printf("dearness allowance%f",da);
         printf ("house rent allowance%f",hra);
         printf("gross salary%f",grs);
         
         return 0;
         getch();
         
         
    }
