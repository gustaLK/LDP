#include <stdio.h>
int triangular (int n){
    if (n==1){
        return 1;
    }
    else
        return triangular(n-1) + n;
}

void ponto(int n){
    int x;

    if (n==0)
        return;

    for(x=0; x<n; x++){
        printf(".");
    }
    printf("\n");
    ponto(n-1);
}

int main(){
    int n;

    scanf("%i", &n);
    printf("%i\n", triangular(n));
    ponto(n);

    return 0;
}
