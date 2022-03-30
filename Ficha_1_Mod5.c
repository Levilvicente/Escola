#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>


//Menu/////////////////////////////////////////////////////////////
void menu()
{
        system("cls");
        system("color 81");
        //menu principal//
        printf("\n**************************************************");
        printf("\n*********  Ficha de Avaliação Nº2 - Mod.4 ********");
        printf("\n**************************************************");
        printf("\n**                1 -Exercício 1                **");
        printf("\n**                2 -Exercício 2                **");
        printf("\n**                3 -Exercício 3                **");          
        printf("\n**                4 -Exercício 4                **");
        printf("\n**                5 -Exercício 5                **");
        printf("\n**                0 - Sair                      **");
        printf("\n**************************************************\n");
}

void linha()
{
    printf("\n*********************************************************************************************************\n");
}


void exc_1()
{
    printf("\nA diferença entre uma estrutura de dados do tipo de array e uma estrutura de dados do tipo record é que o array só recebe dados do mesmo tipo (float ou int ou char) e o record recebe dados de mais do que um tipo (float ou/e int ou/e char).\n\n");
}

void exc_2()
{
    typedef struct 
    {
        char Nome[20];
        float Nota1, Nota2;
    } ALUNO;
    
    printf("\nAlínea a) - [Ver código]\n");

    ALUNO A1,A2;

    linha();

    printf("\nAlínea b)\n");

    printf("\nPara o aluno nº.1 introduza:");

    fflush(stdin);

    printf("\n\n\t-O nome: ");
    gets(A1.Nome);

    printf("\n\n\t-As notas:");

    
    do
    {
        printf("\n\n\t\t-A primeira nota: ");
        scanf("%f", &A1.Nota1);
    } 
    while (A1.Nota1<0 || A1.Nota1>20);
    
    do
    {
        printf("\n\n\t\t-A segunda nota: ");
        scanf("%f", &A1.Nota2);
    } 
    while (A1.Nota2<0 || A1.Nota2>20);

    system("\n\npause");
    system("cls");

    printf("\nAs notas do %s são: \n\t\t\t-1ª nota: %.2f;\n\t\t\t-2ª nota: %.2f;\n\n\n",A1.Nome,A1.Nota1,A1.Nota2);
}

void exc_3()
{
    typedef struct 
    {
        int dia,mes,ano;  
    }nasc;

    typedef struct 
    {
        char nome[50],ender[100],email[50],tel[10];
        nasc ano_nasc;
    }pess;

    pess p[5];
    nasc ano_nasc;
    int i,idade[5];

    for(i=0;i<5;i++)
    {
        
        fflush(stdin);

        printf("\nIntroduza o seu nome: ");
        gets(p[i].nome);

        printf("\nIntroduza o seu endereço: ");
        gets(p[i].ender);

        printf("\nIntroduza o seu e-mail: ");
        gets(p[i].email);

        printf("\nIntroduza o seu número de telefone: ");
        gets(p[i].tel);

        do
        {
            printf("\nIntroduza a sua data de nascimento: ");
            printf("\nDia: ");
            scanf("%d", &p[i].ano_nasc.dia);
            printf("\nMês: ");
            scanf("%d", &p[i].ano_nasc.mes);
            printf("\nAno: ");
            scanf("%d", &ano_nasc.ano);
        }while(p[i].ano_nasc.dia<0  && p[i].ano_nasc.dia >31 || p[i].ano_nasc.mes<0 && p[i].ano_nasc.mes>12 || p[i].ano_nasc.ano<0 && p[i].ano_nasc.ano>2022);
        
        idade[i]=0;

        idade[i]=2022-p[i].ano_nasc.ano;
    }
    
    int K;

    do
    {
        printf("\nQue pessoa deseja saber o nome e a idade: ");
        scanf("%d", &K);
    } while (K<0 || K<5);
    
    printf("\nA %dª pessoa chama-se %s e tem %d anos. ", K,p[K-1].nome,idade[K]);

}

void exc_4()
{
    typedef struct 
    {
        char nome[50],ender[100],email[50];
        float sal;
    }pess;

    int n,i=0;

    pess p[20];
    float max=0, min=99999;

    do
    {    
        i=i+1; 

        fflush(stdin);

        printf("\nIntroduza o seu nome: ");
        gets(p[i].nome);

        if (strcmp(strupr(p[i].nome), "FIM")!=0)
            {
                printf("\nIntroduza o seu endereço: ");
                gets(p[i].ender);

                printf("\nIntroduza o seu e-mail: ");
                gets(p[i].email);

                printf("\nIntroduza o seu número de telefone: ");
                scanf("%f", p[i].sal);

                if (p[i].sal<min)
                    min=p[i].sal;
                else 
                    if(p[i].sal>max)
                        max=p[i].sal;
            }

        
    }while(strcmp(strupr(p[i].nome),"FIM")!=0);
}

void exc_5()
{
    typedef struct 
    {
        char nome[100], numero[3];
    }all;

    all aluno[15];
    char num[3];
    int i;

    for (i=0;i<15;i++)
    {
        fflush(stdin);
        printf("\nIntroduza o nome do aluno: ");
        gets(aluno[i].nome);
        printf("\nIntroduza o número do aluno: ");
        gets(aluno[i].numero);
    }

    fflush(stdin);
        printf("\nIntroduza um número do aluno que deseja encontrar: ");
        gets(num);

        for(i=0;i<15;i++)
        {
            if(strcmp(num,aluno[i].numero)==0)
            {
                printf("\nAluno encontrado");
                printf("\nO nome é %s",aluno[i].nome);
            }        
            flag=1;
        }
        if(flag!=1)
            printf("\nNúmero inválido.");
}

/////////////////////Programa Principal////////////////////////////
int main()
{
    int opc;

    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    
    do
    {
        menu();
        do
        {
            printf("\nQual é a sua opção? ");
            scanf("%d", &opc);
        }
        while (opc<0 && opc>5);
        system("cls");
        switch (opc)
        {  
            case 1:
                    exc_1();

                    break;
            case 2:
                    exc_2();

                    break;
            case 3:  
                    exc_3();

                    break;
            case 4: 
                    exc_4();

                    break;
            case 5: 
                    exc_5();

                    break;
            case 0:break;
        }
        system("\n\n\n\npause");
    }
    while (opc!=0);
}



