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
            ;// o usuário insere os valores do vetor v1 e v1 armazena os valores de i
    }
    for(i=0; i<n; i++) // o i é usado novamente para fazer um loop com for 
    {
        printf("\nVetor v1[%i] = %i; ", i, v1[i]); // é mostrado o vetor e o valor de i e do vetor de v1
        int fat=1; // é criado uma variavel fat
        if(v1[i]<=0) // se o valor do vetor for igual ou menor a 0, mostra uma mensagem pro usuário 
        {
            printf("Não existe fatorial de numero menor que zero!");
        } else while// se o vetor for maior ou igual a 1, o código vai fazer uma usando a variavel fat * o vetor v1
            (v1[i]>=1){
            fat = fat*v1[i];
            v1[i]--;//,o valor do vetor v1 é diminuido em 1
            v2[i]=fat; // o valor do vetor v2 é igual a variavel fat
        }
        printf("\nFatorial = %i. \n", v2[i]);// mostra o cálculo do fatorial na tela 
    }
    return 0; // quebra o while do else e retorna com o valor das variáveis para 0
    
}
