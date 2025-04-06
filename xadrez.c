#include <stdio.h>
// Movimentos das peças de Xadrez: TORRE, BISPO E RAINHA
int main(){
    int torre = 0, bispo=0,rainha= 0; //Declarando as variaveis


    printf("~~~~> Movimentos das Torres: <~~~~\n");
    printf("                                          \n");
// As torres no xadrez se movimentam de forma horizontal e vertical

    
    while(torre <=5){
        printf("Torre para Direita\n");
        torre++;
    }

    printf("~~~~> Movimentos do Bispo: <~~~~\n");
    printf("                                      \n");
// Os movimentos do bispo segue um padrão:cima direita, cima esquerda, baixo esquerda, baixo direita.sempre na diafgonal

    do{
        printf(" Bispo Cima direita\n");
        bispo++;
    }while (bispo <= 5);
    
    printf("                                      \n");
// Rainha por sua vez pode ir em qualquer direção. Tornado-a a mais poderosa do jogo,

    printf("~~~~> Movimentos da Rainha: <~~~~\n");
    printf("                                 \n");

    for(int i=0; i <=8; i++){
        
        printf("Rainha esquerda\n");
        rainha++;  
    }


    }