#include <stdio.h>

int main(void){
    int n, vezes;
    scanf("%d",&n);
    int v[n];
    printf("quantas vezes?: ");
    scanf("%d",&vezes);

    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    for(int k = 0; k < vezes; k++){
        int p = v[0];
        for(int i = 0; i < n-1; i++){
            v[i] = v[i + 1];
        }
        
        v[n - 1] = p;

    }

    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

        
}