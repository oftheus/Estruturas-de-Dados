#include <stdio.h>
#include <stdlib.h> 

/* <stdlib.h> contém funções e constantes para alocação dinâmica
sizeof(tipo) -> retorna o nº de bytes

malloc(tamanho) -> retorna endereço inicial da área de memória alocada, se houver espaço livre
                -> retorna endereço nulo (NULL) se não houver espaço livre
                
free(ponteiro) -> libera a memória apontada por ponteiro
*/

/*Alocação Dinâmica de Memória
Quando não se sabe quanto espaço será necessário*/

int main()
{
    //Calcular média de 'n' valores
    
    int *vetor, n;
    printf("digite a quantidade de nºs: ");
    scanf("%d", &n);
    
    vetor = (int*) malloc(n * sizeof(int));
    
    printf("Complete o Vetor: ");
    for (int j=0;j<n;j++){
        scanf("%d", &vetor[j]);
    }
    
    if (vetor==NULL){
        printf("Mémoria Insuficiente\n");
        exit(1); //aborta o programa e retorna 1 para o sist. operacional
    }
    
    float media = 0.0, resultado = 0.0;
    for (int i=0;i<n;i++){
        media = media + vetor[i];
    }
    resultado = media/n;
    printf("Resultado: %.2f\n", resultado);
    free(vetor);
    
    return 0;
}
