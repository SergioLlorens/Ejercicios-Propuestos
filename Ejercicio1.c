#include <stdio.h>
float celsius_to_fahrenheit(float temperatura);
float celsius_to_kelvin(float temperatura);

int main(){
    
    float temperatura;

    printf("Introduce unos grados: ");
    scanf("%f", &temperatura);

    float cambio1 = celsius_to_fahrenheit(temperatura);
    float cambio2 = celsius_to_kelvin(temperatura);

    printf("La temperatura en Fahrenheit es de: %f \n", cambio1);
    printf("La temperatura en Kelvin es de: %f \n", cambio2);

}

float celsius_to_fahrenheit(float temperatura){
    float operacion = temperatura * 1.8 + 32;
    return operacion;
}

float celsius_to_kelvin(float temperatura){
    float operacion = temperatura + 273.15;
    return operacion;
}