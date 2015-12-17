#include<stdio.h>
 int main()
{
 int km,m,cm;
float inch,ft;
 printf("Enter distance between two cities in kms\n");
 scanf("%d",&km);
 m=km*1000;
 cm=m*100;
 inch=cm/2.54;
  ft=inch*12;
 printf("Distance in meter %d\n",m);
 printf("Distance in centimeter %d\n",cm);
 printf("Distance in inches %f\n",inch);
 printf("Distance in feet %f\n",ft);
return 0;

}

