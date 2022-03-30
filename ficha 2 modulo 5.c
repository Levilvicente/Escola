#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

typedef struct
{
    char nome[50];
    int codigo;
    float preco;
    int stock;
} ex1_struct;

typedef struct
{
    int numero;
    char nome[50];
    int nota;
} ex2_struct;

typedef struct
{
    char sexo;
    int idade;
} ex3_struct;

typedef struct
{
    char nome_prop[50];
    int matricula;
    int ano;
} ex4_struct;

typedef struct
{
    char nome[30];
    int nota;
} ex5_struct;

typedef struct
{
    char nome_clube[20];
    int n_golos;
    int n_sofridos;
    int pontos;
} ex6_struct;

void ex6()
{
    int n, i;
    ex6_struct p1[20];
}

void ex5()
{

}



void ex4()
{
    int i = 0, n = 0, flag = 0;
    char resposta[3];
    ex4_struct p1[100];

    do
    {
        n = n + 1;
        i = i + 1;
        fflush(stdin);
        printf("digite o nome do propriatario: "); gets(p1[i].nome_prop);
        printf("insira a matricula do carro: "); scanf("%d", &p1[i].matricula);
        printf("insira o ano em que comprou o carro: "); scanf("%d", &p1[i].ano);

        printf("quer continuar a introduzir informação?");
        scanf("%s", resposta);

        if(resposta == "nao" || resposta == 'n')
        {
            flag = 1;
        }

    }while(flag = 0);

    for(i = 1; i < n; i++)
    {
        printf("a matricula do %dº carro é %d\n", p1[i].matricula);
        printf("o ano em que o carro foi comprado é %d\n", p1[i].ano);
        printf("o nome do propriatario do carro é %s\n", p1[i].nome_prop);
    }
}



void ex3()
{
    int i, h = 0, m = 0, hi = 0, mi = 0;
    float mh, mm;
    ex3_struct p1[10];

    for(i = 0; i < 10; i++)
    {
        printf("insira o seu sexo: "); scanf(" %c", &p1[i].sexo);
        printf("\n");
        printf("insira a sua idade: "); scanf("%d", &p1[i].idade);
        printf("\n");
    }

    for(i = 0; i < 10; i++)
    {
        if(p1[i].sexo == 'm' || p1[i].sexo == 'M')
        {
            h = h + p1[i].idade;
            hi = hi + 1;
        }
        if(p1[i].sexo == 'f' || p1[i].sexo == 'F')
        {
            m = m + p1[i].idade;
            mi = mi + 1;
        }
    }
    mh = h/hi;

    mm = m/mi;

    printf("a média das idades dos homens é %.2f\n", mh);
    printf("a média das idades das mulheres é %.2f\n", mm);
}

void ex2()
{
    int i, n, flag = 0;
    ex2_struct p1[15];

    for(i = 0; i < 15; i++)
    {
        printf("insira o seu numero: "); scanf("%d", &p1[i].numero);
        printf("\n");
       fflush(stdin);
        printf("insira o seu nome: "); gets(p1[i].nome);
        printf("\n");
        printf("insira a sua nota: "); scanf("%d", &p1[i].nota);
        printf("\n");
    }

  do
  {
    printf("qual é o numero que quer pesquisar\n");
    scanf("%d", &n);

    for(i = 0; i < 15; i++)
    {
        if(n == p1[i].numero)
        {
            printf("o nome do aluno é %s\n", p1[i].nome);
            printf("a nota do aluno foi %d\n", p1[i].nota);
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("o numero que inseriu não existe\n");
    }
  }while(flag = 0);
}




void ex1()
{
    int n, i, c, flag = 0;
    ex1_struct p1[100];

    printf("quantas mercadorias tem?\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("qual é o nome da mercadoria?: "); gets(p1[i].nome);
        printf("\n");
        printf("qual é o código do produto?: "); scanf("%d", &p1[i].codigo);
        printf("\n");
        printf("qual é o preço: "); scanf("%f", &p1[i].preco);
        printf("\n");
        printf("quanto tem de stock?: "); scanf("%d", &p1[i].stock);
        printf("\n");
    }
   do
   {
    printf("insira o código da mercadoria que deseja pesquisar\n");
    scanf("%d", &c);


    for(i = 0; i < n; i++)
    {
        if(c == p1[i].codigo)
        {
            printf("o nome da mercadoria é %s\n", p1[i].nome);
            printf("o preço do produto é %.2f\n", p1[i].preco);
            printf("o stock da mercadoria é %d\n", p1[i].stock);
            flag = 1;
        }
    }

    if(flag = 0)
    {
        printf("o código que digitou nao existe\n");
    }
   } while(flag = 0);
}





int main()
{
    int op;
    setlocale(LC_ALL, "portuguese");

    do
    {
        system("cls");
        printf("************************************\n");
        printf("*          Menu Principal          *\n");
        printf("************************************\n");
        printf("*  1 - ex1                         *\n");
        printf("*  2 - ex2                         *\n");
        printf("*  3 - ex3                         *\n");
        printf("*  4 - ex4                         *\n");
        printf("*  0 - sair                        *\n");
        printf("************************************\n");
        printf("escolha uma opção --> ");
        scanf("%d", &op);

        system("pause");
        system("cls");

        switch(op)
        {
            case 0:
                printf("\n\nprograma fechando\n\n");break;
            case 1:
                ex1();break;
            case 2:
                ex2();break;
            case 3:
                ex3();break;
            case 4:
                ex4();break;
        }
        system("pause");
    }
    while(op != 0);
}
