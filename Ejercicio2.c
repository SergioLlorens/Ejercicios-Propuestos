#include <stdio.h>

int main(){

    int entradas[5];

    int i = 0;
    int num = 99999;

    for(i = 0; i < 5; i++)
    {
        printf("Introduce cinco elementos: ");
        scanf("%i", &entradas[i]);

        if (num > entradas[i]){
            num = entradas[i];            
        }       

    }
    printf("El menor numero del vector es: %i \n", num);


    return 0;
}