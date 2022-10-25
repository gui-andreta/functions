/*
SUBROTINAS

SÃO USADOS PARA SEPARAR DO VOID MAIN PARA MELHOR ORGANIZAÇÃO

1 - FAZENDO A SUBROTINA JA APRESENTAR O RESULTADO
2 - FAZENDO A SUBROTINA RETORNAR A INFORMAÇÃO PARA O PROGRAMA
*/

#include <stdio.h>

void somaMostra(int nA, int nB){
    int soma;
    soma = nA + nB;

    printf("O resultado da soma foi de: %i", soma);
}

int somaRet(int nA, int nB){
    int soma;
    soma = nA + nB;

    return(soma);
}

void main(){
    int vA, vB, vS;

    printf("Digite o primeiro numero: ");
    scanf("%i", &vA);

    printf("Digite o segundo numero: ");
    scanf("%i", &vB);

    //somaMostra(vA, vB);

    vS = somaRet(vA, vB);
    printf("SomaRet = %i", vS);
}