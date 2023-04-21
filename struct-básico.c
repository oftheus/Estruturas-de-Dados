#include <stdio.h>

struct ponto2d{
    float x;
    float y;
};

int main()
{
    struct ponto2d p;
    printf("Digite as coordenadas do ponto(x,y): ");
    scanf("%f%f",&p.x,&p.y);
    printf("O ponto fornecido foi: (%.2f,%.2f)",p.x,p.y);
    
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------
    
#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char letra;
    int idade;
}Tcadastro;


int main()
{
    Tcadastro meuCadastro;
    meuCadastro.letra = 'M';
    meuCadastro.idade = 21;
    printf("Nome: %c\n", meuCadastro.letra);
    printf("Idade: %d\n",meuCadastro.idade);
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    char nome[30];
    int idade;
}Tcadastro;


int main()
{
    Tcadastro meuCadastro;
    strcpy(meuCadastro.nome,"Matheus Gonçalves");
    meuCadastro.idade = 21;
    printf("Nome: %s\n", meuCadastro.nome);
    printf("Idade: %d\n",meuCadastro.idade);
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    char nome[30];
    int idade;
}Tcadastro;


int main()
{
    Tcadastro *meuCadastro;
    meuCadastro = (Tcadastro*)malloc(sizeof(Tcadastro));
    
    strcpy(meuCadastro->nome,"Matheus Gonçalves Silva");
    meuCadastro->idade = 21;
    
    printf("Nome: %s\n", meuCadastro->nome);
    printf("Idade: %d\n",meuCadastro->idade);
    
    free(meuCadastro);
    
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    float *notas;
}Tcadastro;

int main()
{
    int qtd;
    scanf("%d",&qtd);
    Tcadastro alunoUm;
    alunoUm.notas = malloc(sizeof(float) * qtd);
    
    for (int i=0;i<qtd;i++){
        float n;
        scanf("%f",&n);
        alunoUm.notas[i]=n;
    }
    
    for (int k=0;k<qtd;k++)
        printf("Materia [%d] = %.2f\n",k,alunoUm.notas[k]);
    
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    char nome[30];
    int idade;
    float notas[3];
}Tcadastro;

int main()
{
    Tcadastro *usuario;
    usuario = (Tcadastro*) malloc(sizeof(Tcadastro));
    
    strcpy(usuario->nome,"Matheus Goncalves");
    printf("Nome: %s\n", usuario->nome);
    
    usuario->idade=21;
    printf("Idade: %d\n", usuario->idade);
    
    for (int i=0;i<3;i++){
        float grades;
        scanf("%f",&grades);
        usuario->notas[i] = grades;
    }
    
    for (int j=0;j<3;j++){
        printf("%.2f ", usuario->notas[j]);
    }
    
    return 0;
}

