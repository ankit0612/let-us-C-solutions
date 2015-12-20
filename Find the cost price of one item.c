#include<stdio.h>
 int main()
  {
      float sp,cp,pro;
     printf("Enter the selling price and profit\n\n");
     scanf("%f%f\n",&sp,&pro);
     
    cp=sp-pro;
    cp=cp/15;
    
    printf("Cost price per item in Rs%f\n",cp);
    
    printf("Selling price per item%f\n",sp);
    
    printf("Profit per item%f\n",pro);
    
    
    return 0;
     
     
  }
