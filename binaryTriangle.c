/*

Pattren to print half pyramid in 1-01-101 order

*/


#include <stdio.h>

int main()
{
    int num;
    printf("Enetr a number:");
    scanf("%d",& num);
    
    for(int i = 0;i<num; i++){
        for(int j = 0;j<=i; j++){
           if((i+j) % 2 == 0){
               printf("1");
           } 
           else{
               printf("0");
           }
        }
        printf("\n");
    }

    return 0;
}
