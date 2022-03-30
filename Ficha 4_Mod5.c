#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>


int i,f;
typedef struct 
    {
        char nome[100];
        float sal;
        int ano;
    }type;

type pess[15];

//Menu/////////////////////////////////////////////////////////////
void menu()
{
        system("cls");
        system("color 81");
        //menu principal//
        printf("\n******************************************");
        printf("\n*****  Ficha de Trabalho Nº3 - Mod.5 *****");
        printf("\n******************************************");
        printf("\n**          1 - a)                      **");
        printf("\n**          2 - b)                      **");
        printf("\n**          3 - c)                      **");
        printf("\n**          4 - d)                      **");
        printf("\n**          5 - e)                      **");
        printf("\n**          6 - f)                      **");
        printf("\n**          7 - g)                      **");
        printf("\n**          8 - h)                      **");          
        printf("\n**          0 - Sair                    **");
        printf("\n******************************************\n");
}


void exc_1()
{
    char sn[4];
    do
    {
        i++;
        f++;
        fflush(stdin);
        printf("\nNome: ");
        gets(pess[i].nome);
        
        do
        {
            printf("\nIntroduza o seu salário: ");
            scanf("%f", &pess[i].sal);
        } while (pess[i].sal<=0);

        do
        {
            printf("\nIntroduza o seu ano de nascimento ");
            scanf("%d", &pess[i].ano);
        } while (pess[i].ano<1925 || pess[i].ano>2022);
        fflush(stdin);
        do
        {
            printf("\nDeseja continuar a introduzir dados? ");
            gets(sn);
            strupr(sn); 
        } while (strcmp(sn,"SIM")==0 && strcmp(sn,"NÃO")==0);
        
    } while(strcmp(sn,"SIM")==0);
}

void exc_2()
{
    printf("\nNome                  Salário");
    for(i=0;i<f-1;i++)
    {
        printf("\n %s  ",pess[i].nome);printf("     %.2f",pess[i].sal);
    }

void exc_3()
{
    
}

void exc_4()
{
    
}

void exc_5()
{
    
}

void exc_6()
{
    
}

void exc_7()
{
    
}

void exc_8()
{
    
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
        while (opc<0 && opc>8);
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
            case 6:  
                    exc_6();

                    break;
            case 7:  
                    exc_7();

                    break;
            case 8:  
                    exc_8();

                    break;

            case 0:break;
        }
        system("\n\n\n\npause");
    }
    while (opc!=0);
}