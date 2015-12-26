#include<stdio.h>

 int main()
 
  {
      int num  , newnum=0 , a;
      printf("Enter a number\n");
      scanf("%d",&num);
      
      a = num/10000+1;
      num = num%10000;
      newnum = newnum + a*10000;
      
      a = num/1000+1;
      num = num%1000; 
      newnum = newnum + a*1000;
      
      a = num/100+1;
      num = num%100;
      newnum = newnum + a*100;
      
      a = num/10+1;
      num = num%10;
      newnum = newnum + a*10;
      
      a = num+1;
      num = num%1;
      newnum = newnum + a;
      
      printf("\nNew number is  this...%d%d",num,newnum);
      
      return 0;
     
  }
