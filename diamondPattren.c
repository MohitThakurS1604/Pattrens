#include<stdio.h>
      int main(){

        int num;
        printf("Eneter a number:");
        scanf("%d",&num);

      for (int i = 1; i <= num; i++)
       {
      for (int j = i; j < num; j++)
       {
      printf(" ");
      }
      for (int k = 1; k <= i; k++) 
      {
           printf(" *");
      }
       printf("\n");
     }
     for (int l = num-1; l >=1; l--)
     {
         for (int m = num; m > l; m--)
         {
           printf(" ");
         }
           for (int n = 1; n <= l; n++)
           {
           printf(" *");
           }
           
           printf(" \n");
         
     }
     
  }