#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>


int i;

//Menu/////////////////////////////////////////////////////////////
void menu()
{
        system("cls");
        system("color 81");
        //menu principal//
        printf("\n**************************************************");
        printf("\n*********  Ficha de Trabalho Nº3 - Mod.5 *********");
        printf("\n**************************************************");
        printf("\n**                1 -Exercício 1                **");
        printf("\n**                2 -Exercício 2                **");
        printf("\n**                3 -Exercício 3                **");          
        printf("\n**                0 - Sair                      **");
        printf("\n**************************************************\n");
}

void menu_2()
{
    system("cls");

    printf("\n************************************************************************************");
    printf("\n******************  Ficha de Trabalho Nº3 - Mod.5 - EXC.1  *************************");
    printf("\n************************************************************************************");
    printf("\n**             1 -Registar os contatos na agenda                                  **");
    printf("\n**             2 -Consultar um dado nome na agenda                                **");
    printf("\n**             3 -Exibir o nome e a idade do cliente mais velho                   **");          
    printf("\n**             4 -A partir de um número de telefone mostrar o nome do cliente;    **");
    printf("\n**             5 -Voltar ao menu principal                                        **");
    printf("\n************************************************************************************\n");
}



void exc_1()
{
    int cli,flag;

    do
    {
        printf("Quantos clientes são? ");
        scanf("%d", &cli);
    }while(cli<0);


    typedef struct
    {
        char nome[100], email[100], tel[9];
        int idade;
    }cliente;

    cliente c[cli];
    int opc2,m=0,maxid=0;
    char n[9];

    void exc_1_1()
    {
        
        for (i=0;i<cli;i++)
        {
            printf("\n\t\t\t\tCliente %d", i+1);

            fflush(stdin);
            printf("\nQual é o seu nome: ");
            gets(c[i].nome);
            
            printf("\nQual é o seu e-mail: ");
            gets(c[i].email);

            printf("\nQual é o seu número de telefone: ");
            gets(c[i].tel);

            do
            {
                printf("\nQual é a sua idade: ");
                scanf("%d", &c[i].idade);
            } while (c[i].idade<0 || c[i].idade>120);
                        
        printf("\n");

        if(c[i].idade>maxid)
        {
            m=i;
            maxid=c[i].idade;
        }
        }
    }

    void exc_1_2()
    {
        int k;

        do
        {
            printf("\nIntroduza o cliente que deseja consultar: ");
            scanf("%d", &k);    
        } while (k<=0 || k>cli);

        printf("\n\t\t\t\tCliente %d", k);
        printf("\nNome: %s\n", c[k-1].nome);
        printf("\nE-mail: %s\n", c[k-1].email);
        printf("\nTelemóvel: %s\n", c[k-1].tel);
        printf("\nIdade: %d\n", c[k-1].idade);
        
    }

    void exc_1_3()
    {
        printf("\nO cliente mais velho é o cliente %s e tem %d anos. ", c[m].nome,c[m].idade);
    }

    void exc_1_4()
    {
        fflush(stdin);
        printf("\nIntroduza um número de telemóvel");
        gets(n);

        for(i=0;i<cli;i++)
        {
            if(strcmp(n,c[i].tel)==0)
            {
                printf("\nNome encontrado");
                printf("\nO nome é %s",c[i].nome);
                flag=1;
            }        
        }
        if(flag!=1)
            printf("\nO número não existe.");

    }

    
    do
    {
        menu_2();
        do
        {
            printf("\nQual é a sua opção? ");
            scanf("%d", &opc2);
        }
        while (opc2<=0 && opc2>5);
        system("cls");
        switch (opc2)
        {  
            case 1:
                    exc_1_1();
                    break;
            case 2:
                    exc_1_2();
                    break;
            case 3:  
                    exc_1_3();
                    break;
            case 4: 
                    exc_1_4();
                    break;
            case 5:break;
        }
        system("\n\n\n\npause");
    }
    while (opc2!=5);

}

void exc_2()
{
    typedef struct 
    {
        char nome[100];
        int idd;
    }regist;

    regist tec[5], eng[5];
    int i,m,k,max=0;

    printf("\n\t\tTécnicos");
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nIntroduza o seu nome técnico nº%d: ", i+1);
        gets(tec[i].nome);

        do
        {
            printf("\nItroduza a sua idade técnico nº%d: ", i+1);
            scanf("%d", &tec[i].idd);
        } while (tec[i].idd<=0 || tec[i].idd>120);
        
        if(tec[i].idd>max)
        {
            m=i;
            max=tec[i].idd;
        }
    }

    printf("\n\t\tEngenheiros");
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nIntroduza o seu nome engenheiro nº%d: ", i+1);
        gets(eng[i].nome);

        do
        {
            printf("\nItroduza a sua idade engenheiro nº%d: ", i+1);
            scanf("%d", &eng[i].idd);
        } while (eng[i].idd<=0 || eng[i].idd>120);
        
        if(eng[i].idd>max)
        {
            k=i;
            max=eng[i].idd;
        }
    }
    
    system("cls");

    printf("\n\nO técnico mais velho é o %s e tem %d anos.",tec[m].nome,tec[m].idd);

    printf("\n\nO engenheiro mais velho é o %s e tem %d anos.",eng[m].nome,eng[m].idd);
    
}

void exc_3()
{
    int n;

    do
    {
        printf("Quantos alunos são? ");
        scanf("%d", &n);
    } while (n<0);
    


    typedef struct 
    {
        char nm;
        float nt;
    }alns;

    alns a[n];

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Qual é o nome do %dº aluno: ",i+1);
        gets(a[i].nm);

        do
        {
            printf("Qual é a nota do %dº aluno", i+1);
            scanf("%f", &a[i].nt);
        } while (a[i].nt<0 || a[i].nt>20);
        
    }
    printf("\nNome\t"); printf("\tNota\t"); printf("\tSituação");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t", a[i].nm); printf("\t%.1f\t",a[i].nt); if(a[i].nt<20)
                                                                printf("\tReprovado!\t");
                                                            else
                                                                printf("\tAprovado!\t");
    }




    
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
        while (opc<0 && opc>3);
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

            case 0:break;
        }
        system("\n\n\n\npause");
    }
    while (opc!=0);
}