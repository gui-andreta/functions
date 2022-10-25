#include <stdio.h>

int diasvividos(int idade, int dias){
    
    int ope;
    ope = idade * 365;

    return(ope);
};

int main(){
    int anos;
    int dias;
    int print;

    dias = 365;

    printf("Digite quantos anos voce tem: ");
    scanf("%i", &anos);

    print = diasvividos(anos, dias);

    printf("Voce viveu um total de %i dias", print);
}