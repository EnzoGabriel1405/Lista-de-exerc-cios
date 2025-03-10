/*  • Escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso.*/
#include <stdio.h>

int main(){
    int idade;
    printf("qual é a sua idade? ");
    scanf("%d", &idade);
    while(idade<0){
        printf("digite novamente. ");
        scanf("%d", &idade);
    }
    if(idade<14){
        printf("você é uma criança!");
    }else if(idade<18){
        printf("você é um adolescente!");
    }else if(idade<60){
        printf("você é um adulto!");
    }else{
        printf("você é um idoso!");
    }
}