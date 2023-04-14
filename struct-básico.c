#include <stdio.h>

/* Tipo Estruturado (Struct)
tipo de dado composto por outros elementos(campos)
campos são acessados através do '.'*/

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
    
    /*Ponteiros para Estruturas
    
    struct ponto2d *pp;
    pp->x = 12.0;
    
    Alocação Dinâmica de Estruturas
    struct ponto2d* p;
    p = (strict ponto2d*) malloc (sizeof(struct ponto2d));
    p-> 12.0;
    
    typedef struct ponto2d {
        float x;
        float y;
    }TPonto2d; */
    
    return 0;
}
