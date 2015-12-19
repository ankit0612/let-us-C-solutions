#include<stdio.h>
 int main()
  {
      int c,d,x;
      printf("Enter the number Which in C\n");
     scanf("%d",&c);
     
     printf("Enter the number Which in D\n");
     scanf("%d",&d);
     
     x=c;
     c=d;
     d=x;
     
     printf("New number that in c%d",c);
     printf("New number thst in d%",d);
     return 0;
  }
