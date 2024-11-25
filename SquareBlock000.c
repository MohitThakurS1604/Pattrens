/*

Pattren to print square using number in 00-11 order ( input by user )

*/
    
    
    #include<stdio.h>
    int main(){
        int n;
        printf("Enter the Number : ");
        scanf("%d",&n);
        for(int i = 0; i<n; i++){
            for(int j =0; j<n; j++){
                printf("%d ",i);
            }
            printf("\n");
        }
        return 0;
    }
