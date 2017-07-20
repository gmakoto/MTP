#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

void captura(char *nome, int *pidade, float *paltura)
{
    fprintf(stdout,"Entre com o nome :");
    fgets(nome, MAXCHAR, stdin);
    fprintf(stdout,"Entre com a idade (anos): ");
    fscanf(stdin,"%d", pidade);
    fprintf(stdout, "Entre com a altura (metros) :");
    fscanf(stdin, "%f", paltura);
}

void mostra (char *nome, int pidade, float paltura)
{
    printf("%s%d anos, %g metros.\n", nome, pidade, paltura);
}

void gravar()
{
    char nome[MAXCHAR];
    int idade;
    float altura;
    FILE * arquivo = NULL;
    arquivo = fopen("info.txt", "w");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Problema na gravacao");
        exit(EXIT_FAILURE);
    }
    captura(nome, &idade, &altura);
    fprintf(arquivo, "%s%d\n%f\n", nome, idade, altura);
    fclose(arquivo);

}

void recuperar()
{
    char nome[MAXCHAR];
    int idade;
    float altura;
    FILE * arquivo = NULL;
    arquivo = fopen("info.txt", "r");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Arquivo inexistente\n");
        exit(EXIT_FAILURE);
    }
    fgets(nome, MAXCHAR, arquivo);
    fscanf(arquivo, "%d", &idade);
    fscanf(arquivo, "%g", &altura);
    mostra(nome, idade, altura);
}

void menu()
{
    int opc;
    printf("1 - Gravar\n");
    printf("2 - Recuperar\n");
    printf("\n Digite ua opcao: ");
    scanf("%d", &opc); getchar();
    if(opc == 1)
        gravar();
    else
        recuperar();
}

int main()
{
    menu();
    return 0;
}
