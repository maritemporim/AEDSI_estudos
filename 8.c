#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == (n-1) || j == 0){
                printf("*");
            }
            else if( i == 0 || i == (n-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
}
}