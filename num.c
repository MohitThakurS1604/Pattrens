#include<stdio.h>
   int main()
   {
      int input;
      printf("Enter a number :");
      scanf("%d",&input);
       
       for (int i = 0 ; i < input; i++)
       {
         for (int j = 0; j <= i; j++)
         {
          printf("%d",j);
         }
          printf("\n");
       }
     }