#include<stdio.h>
    int main(){
        int num;
        printf("Enter the Number : ");
        scanf("%d",&num);
        for(int i = 0; i<num; i++){
            for(int j =num-1-i; j<=i; j++){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }