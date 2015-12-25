 #include<stdio.h>
int main()
{
    int num;
    int sum=0,i,lastDigit;

    printf("Enter any positive no more than one digit");
    scanf("%d",&num);

    sum = sum + num % 10;

    while(num != 0)
{
         lastDigit = num;
         num = num /10;
 }
    sum = sum + lastDigit; 

    printf("\nSum of first and last digit of given numer is :%d",sum);
   		retune 0;
}
