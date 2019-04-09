#include <stdio.h>

int fibona(int n);

int main(){

    int numFinal;
    int i;

    printf("Numero de elementos: ");
    scanf("%i", &numFinal);

    for(i = 1; i <= numFinal; i++)
    { 
        fflush(stdin);      

        if (numFinal == i){            
            printf("%i ", fibona(i));
        } else {            
            printf("%i,", fibona(i));
        }

    }
    return 0;
}

int fibona(int n){
    if (n == 0 || n == 1){
        return n;
    } else {
        return (fibona(n-1)+fibona(n-2));
    }

}