/*

 Full pyramid pattren  ( input by user )
 
 */
 
 
 #include<stdio.h>
int main(){
 int num;

 printf("Enter a number:");
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
 }
