/*

Pattren to print half pyramid in 1-01-101 order ( input by user )

*/

#include <stdio.h>

int main()
{
    int num;
    int val = 1;

    printf("Enetr a number:");
    scanf("%d",&num);
    
   for(int i = 0; i<num; i++){
       for(int j = 0;j<=i ; j++){
           if(val == 1){
               printf("%d", val);
               val = 0;
           }
           else{
                printf("%d", val);
                val = 1;
           }
       }
       printf("\n");
   }

    return 0;
}
