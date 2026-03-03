#include <stdio.h>

void converte(char x, float y){
    float temp;
    if(x == 'c'){
        temp = (y * 9/5) + 32;
        printf("Celsius = %.1f°C\nFarenheit = %.1f°F\n", y, temp);
    } 
    else if(x == 'f'){
        temp = (y - 32) * 5/9;
        printf("Celsius = %.1f°\nFarenheit = %.1f°\n", y, temp);
    }

}

int main(){
    char grau;
    float temperatura;
    printf("digite o grau (c ou f) e a temperatura\n");

    scanf(" %c %f", &grau, &temperatura);

    converte(grau, temperatura);

    return 0;
}