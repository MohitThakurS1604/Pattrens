/*

It will print star  { Right sided pyramid  ( input by user)}

*/
    
    #include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i =0; i<n; i++){
        for(int j = n-1-i; j>0; j--){
            printf("  ");
        }
        for(int k = 0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
