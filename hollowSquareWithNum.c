 /*
 
  Program to print Hollow square in 0000 in column and 0123 in rows
  ( input by user )
  
  */


#include<stdio.h>
    int main(){
        int n;
        printf("Enter the Number : ");
        scanf("%d",&n);
        for(int i = 0; i<n; i++){
            for(int j =0; j<n; j++){
                if(i == 0 || j == 0 || i == n-1 || j == n-1){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        return 0;
    }
