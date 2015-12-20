#include<stdio.h>
 int main()
  {
      int num,rem,sum=0;
      printf("Enter the five digits number\n");
      scanf("%d",&num);
    
    while(num)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        
    }
      printf("\nThe sum of the digites%d\n",sum);
    return 0;
      
  }
