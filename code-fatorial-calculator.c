#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int i, n;//  variáveis int, i e n
    printf("Quantos valores deseja inserir: ");
    scanf("%i", &n);// o usuário digita o valor da variavel n em uma string %
    
    int v1[n], v2[n]; // criação dos variáveis v1 e v2, com vetores n 
    
    for(i=0; i<n; i++) // enquanto n for menor que i faça e adiciona +1 no i
    {
        printf("Insira valores que deseja ver o seu fatorial: ");
        scanf("%i", &v1[i])
            ;// o usuário insere os valores do vetor v1
    }
    for(i=0; i<n; i++){
        printf("\nVetor v1[%i] = %i; ", i, v1[i]);
        int fat=1;
        if(v1[i]<=0){
            printf("Não existe fatorial de numero menor que zero!");
        } else while(v1[i]>=1){
            fat = fat*v1[i];
            v1[i]--;
            v2[i]=fat;
        }
        printf("\nFatorial = %i. \n", v2[i]);
    }
    return 0;
}
