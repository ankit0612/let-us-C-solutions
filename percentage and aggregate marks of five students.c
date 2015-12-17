#include <stdio.h>
  int main()
 {
     int m1,m2,m3,m4,m5,aggr;
     float per;
     printf("Enter the marks obtained by the student in five subjects\n");
     scanf("\n%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     
     aggr=m1+m2+m3+m4+m5;
     per=aggr/500*100;
     
     printf("\nAggregate of the marks%d",aggr);
     printf("\nPercentage of the marks%f",per);
      return 0;
 }


