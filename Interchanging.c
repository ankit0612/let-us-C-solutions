#include<stdio.h>
 int main()
 {
     int c,d,x;
     printf("Enter the number that is located into C\n");
     scanf("%d",&c);
     printf("Enter the number that is located into D\n");
     scanf("%d",&d);
     x=c;
     c=d;
     d=x;
     
     printf("New number at location C%d\n\n",c);
     printf("New number at location D%d\n\n",d);
     
     return 0;
     
    
 }
