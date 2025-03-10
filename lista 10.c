/*  • Escreva um programa que solicite o nome do usuário e imprima uma saudação personalizada.*/
#include <stdio.h>

int main(){
    char nome[50];
    printf("qual é o seu nome? \n");
    scanf("%s", &nome);
    printf("seja bem-vindo %s! você é maneirao!", nome);
}