/*

It will print a half pyramid in 0 then 01 then 012 order

*/

#include<stdio.h>
    int main(){
        int n;
        printf("Enter the Number : ");
        scanf("%d",&n);
        for(int i = 0; i<n; i++){
            for(int j =0; j<=i; j++){
                printf("%d ",j);
            }
            printf("\n");
        }
        return 0;
    }
