#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int i,n;

//Menu/////////////////////////////////////////////////////////////
void menu()
{
        system("cls");
        system("color 81");
        //menu principal//
        printf("\n**************************************************");
        printf("\n*********  Ficha de Avalia��o N�2 - Mod.4 ********");
        printf("\n**************************************************");
        printf("\n**                1 -Exerc�cio 1                **");
        printf("\n**                2 -Exerc�cio 2                **");
        printf("\n**                3 -Exerc�cio 3                **");          
        printf("\n**                4 -Exerc�cio 4                **");
        printf("\n**                5 -Exerc�cio 5                **");
        printf("\n**                0 - Sair                      **");
        printf("\n**************************************************\n");
}

void exc_1()
{
     typedef struct
    {
        char nome[25],ende[25],tel[9],ec,s;
        int cc,id,codp;
        float sal;
    } pessoa;

    int i;
    pessoa pess[50];

    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("Introduza o seu nome: ");
        gets(pess[i].nome);

        fflush(stdin);
        printf("Introduza o seu endere�o: ");
        gets(pess[i].ende);

       do
       {
        printf("Introduza o seu sal�rio: ");
        scanf("%f", &pess[i].sal);
       } while(pess[i].sal<0 || pess[i].sal>100000);

       do
       {
        printf("Introduza o seu n�mero de contribuinte: ");
        scanf("%d", &pess[i].cc);
       } while(pess[i].cc<0 || pess[i].cc>999999999);

       do
       {
        printf("Introduza o seu c�digo postal: ");
        scanf("%d", &pess[i].codp);
       } while(pess[i].codp<1000 || pess[i].codp>9999);

       do
       {
        printf("Introduza o seu estado civil (S ou C): ");
        scanf(" %c", &pess[i].ec);
       } while(pess[i].ec=='s' && pess[i].ec=='S' && pess[i].ec=='c' && pess[i].ec=='C');


        printf("Introduza o seu numero de telemovel: ");
        gets(pess[i].tel);

       do
       {
        printf("Introduza a sua idade: ");
        scanf("%d", &pess[i].id);
       } while(pess[i].id<0 || pess[i].id>120);

       do
       {
        printf("Introduza o seu sexo: ");
        gets(pess[i].s);
        strlwr(pess[i].s);
       } while(strcmp(pess[i].s,'m')!=0 && strcmp(pess[i].s,'f')!=0);

      system("cls");
    }

    for(i=0;i<5;i++)
    {
        if(pess[i].sal>500 && pess[i].ec=='c' && pess[i].s=='m')
        {
            printf("\n%s\n", pess[i].nome);
        }
    }
}

void exc_2()
{
    typedef struct
    {
        char tip[20],end[100],l[20],sit[15];
        float vv;
    } imoveis;

    int f=0;
    char pesq[25];
    imoveis imo[50];

    do
    {
        printf("\nQuantos imoveis � que quer registar?\n");
        scanf("%d", &n);
    } while (n<0);
    
    

    for(i=0;i<n;i++)
    {
        do
        {
            fflush(stdin);
            printf("\nIntroduza o tipo de im�vel que tem[loja/apartamento/casa]: ");
            gets(imo[i].tip);
            strupr(imo[i].tip);
        } while (strcmp(imo[i].tip,"LOJA")!=0 || strcmp(imo[i].tip,"CASA")!=0 || strcmp(imo[i].tip,"APARTAMENTO")!=0);
        

        fflush(stdin);
        printf("\nIntroduza o seu endere�o: ");
        gets(imo[i].end);

        fflush(stdin);
        printf("\nIntroduza a sua localidade: ");
        gets(imo[i].l);

        do
        {
            printf("\nIntroduza o valor de venda: ");
            scanf("%f", &imo[i].vv);
        } while (imo[i].vv<0);
        
        do
        {
            fflush(stdin);
            printf("\nIntroduza a sua situa��o[aluguer/venda]: ");
            gets(imo[i].sit);
            strupr(imo[i].sit);
        } while (strcmp(imo[i].sit,"ALUGUER")!=0 || strcmp(imo[i].sit,"VENDA")!=0);
        

        

        system("cls");
    }

    do
    {
        printf("\nQual � a situa��o que deseja: ");
        gets(pesq);
        strupr(imo[i].sit);
    } while (strcmp(imo[i].sit,"ALUGUER")!=0 || strcmp(imo[i].sit,"VENDA")!=0);
   


    for(i=0;i<n;i++)
    {
        if(strcmp(imo[i].sit, pesq)==0)
        {
            f=1;
            printf("o tipo de im�vel � %s", imo[i].tip);
            printf("o endere�o � %s", imo[i].end);
            printf("a localidade � %s", imo[i].l);
            printf("o valor de venda � %.2f", imo[i].vv);
            printf("e a situa��o que inseriu � %s", pesq);
        }
    }

    if(f=1)
    {
        printf("\n\nFim da Pesquisa\n\n");
    }  
}

void exc_3()
{
     typedef struct
    {
        int cod,sm,sa;
        char des[50];
        float p;
    } produtos;

    produtos prod[100];

    do
    {
        printf("\nQuantos produtos quer registar?");
        scanf("%d", &n);
    } while (n<0 || n>100);
    
    

    for(i=0;i<n;i++)
    {
        do
        {
            printf("\nIntroduza o c�digo do produto: ");
            scanf("%d", &prod[i].cod);
        } while (prod[i].cod<0);
    
        
        printf("\nIntroduza a descri��o do produto: ");
        gets(prod[i].des);
        
        
        do
        {
            printf("\nIntroduza o stock minimo do produto: ");
            scanf("%d", &prod[i].sm);
        }while(prod[i].sm<0 || prod[i].sm>n);

        do
        {
            printf("\nIntroduza o stock atual do produto: ");
            scanf("%d", &prod[i].sa);
        } while (prod[i].sa<0 || prod[i].sa>0);
        
        do
        {
            printf("\nIntroduza o pre�o do produto: ");
            scanf("%f", &prod[i].p);
        } while (prod[i].p<0);
        
        system("pause");
        system("cls");
    }

    for(i=0;i<n;i++)
    {
        if(prod[i].sa < prod[i].sm)
        {
            printf("\no c�digo do produto �: %d", prod[i].cod);
            printf("\na descri��o do produto �: %s", prod[i].des);
            printf("\no stock minimo do produto �: %d",prod[i].sa);
            printf("\no stock atual �: %d", prod[i].sa);
            printf("\no pre�o do produto �: %.2f", prod[i].p);
        }
        system("pause");
        system("cls");
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
            printf("\nQual � a sua op��o? ");
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