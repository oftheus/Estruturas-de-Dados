#include <stdio.h>

void incrementar(int *v_inc){
    for (int i=0;i<10;i++){
        v_inc[i]++;
    }
}

void trocar(int *pn1, int *pn2){
        int temp = *pn1;
        *pn1 = *pn2;
        *pn2 = temp;
    }

float media(int *pv){
    float m = 0.0;
    for (int i=0;i<10;i++){
        m = m + pv[i];
    }
    return m/10;
}

int main()
{
    /*Ponteiros armazenam endereços de memórias de outras variáveis
    & -> endereço de, posição onde variável está armazenada
    * -> conteúdo do endereço apontado por */
    
    int a = 5,c;
    int *p = &a; // 'p' aponta para 'a', endereço de 'a' colocado no conteúdo de 'p'
    *p=6; // conteúdo do endereço apontado por p será alterado, 'a' = 6
    c = *p; // c receberá o conteúdo do endereço apontado por p, 'c'=6
    
    /*obs: para fazer (*p=6), deve-se, anteriormente, atribuir um endereço a p (*p = &a)
    casa contrário, haverá um erro na atribuição, o valor será armazenado num espaço desconhecido*/
    
    /*Impressão de Ponteiros
    Usa-se o formatador %p*/
    printf("O endereço de 'a' é: %p\n",p);
    printf("O endereço de 'a' é: %p\n",&a);
    
    printf("O valor de 'a' é: %d\n",*p);
    
    printf("Endereço do ponteiro: %p\n",&p);
    
    //Ponteiro para Ponteiro
    int **pp = &p; //'pp' armazena o endereço de 'p'
    printf("O valor de 'a' é: %d\n", **pp);
    
    /*Passagem de ponteiros para funções
    C usa passagem de parâmetros por valor
    Alterar o parâmetro não afeta a variável que foi usada na chamada da função
    obs! : se o parâmetro for um ponteiro, as alterações serão refletidas nas variáveis*/ 
    
    int n1=5,n2=7;
    trocar(&n1,&n2); //passou-se os endereços das variáveis
    printf("n1=%d e n2=%d\n",n1,n2);
    
    /* Vetores são ponteiros
    Um vetor é alocado em posições contíguas de memória */
    
    //Alocando vetor de forma estática
    int vetor[10]; //vetor com tamanho para 10 variáveis
    //vetor[0] é o primeiro elemento do vetor
    
    /*Exemplo, calcular média de 10 números reais
    usando vetor como parâmetro*/
    
    int v[10];
    for (int i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
    float resultado=media(v);
    printf("Média = %.2f", resultado);
    
    //Lembrando, quando vetores são parâmetros eles são alterados. . . 
    incrementar(v);
    printf("\nVetor incrementado: ");
    for (int i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    
    return 0;
}
