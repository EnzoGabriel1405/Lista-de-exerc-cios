/* • Escreva um programa que peça ao usuário para adivinhar um número e informe se o palpite está correto.*/
#include <stdio.h>

int main(){
    int n = 8;
    int a;
    printf("adivinhe o número: ");
    scanf("%d", &a);
    if(a==n){
        printf("parabéns! você acertou!");
    }else{
        printf("você errou!");
    }
}