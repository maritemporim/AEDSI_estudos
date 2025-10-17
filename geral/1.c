#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int m[n][n];
    for(int i = 0; i < n; i++){ // colunas
        for(int j = 0; j < n; j++){ // linhas
            scanf("%d",&m[i][j]);
            
        } 
    }
    int p[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            p[j][n-1-i] = m[i][j]; 
        }
    }

    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            printf("%d ",p[i][j]);
            }
        }
        return 0;
}