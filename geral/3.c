#include <stdio.h>


void inverter(char *s2){
    inverter(s2+1);
}

int p(char *s){
    int *s2 = *s;
    if (inverter(s2) == *s)
    return 0;
    else
    return 1;

    
}

int main(void){
    char *s;
    scanf("%s",s);
    p(s);
    if(0) printf("Sim");
    else printf("nao");


}