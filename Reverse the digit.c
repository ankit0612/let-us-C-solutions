 8- Find the Reverse of the number.



#include<stdio.h>
#include<conio.h> 

int main()
{
    clrscr();

   int n, rev = 0;
 
   printf("Enter a number that to reverse\n");

   scanf("%d", &n);
 
   while (n!= 0)
   {
      rev = rev*10;

      rev= rev+n%10;

      n = n/10;
   }
 
   printf("Reverse of number is = %d\n", rev);
 
   return 0;

      getch();

}




OUTCOME - 

         Enter the number = 12345
         Reverse of number is = 54321

