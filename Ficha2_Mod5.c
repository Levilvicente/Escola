#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>


//Menu/////////////////////////////////////////////////////////////
void menu()
{
        system("cls");
        system("color 81");
        //menu principal//
        printf("\n**************************************************");
        printf("\n***************  Ficha N�2 - Mod.5  **************");
        printf("\n**************************************************");
        printf("\n**                1 -Exerc�cio 1                **");
        printf("\n**                2 -Exerc�cio 2                **");
        printf("\n**                3 -Exerc�cio 3                **");          
        printf("\n**                4 -Exerc�cio 4                **");
        printf("\n**                5 -Exerc�cio 5                **");
        printf("\n**                5 -Exerc�cio 6                **");
        printf("\n**                0 - Sair                      **");
        printf("\n**************************************************\n");
}

void exc_1()
{
    int n,i;
    typedef struct 
    {
        char cod[9],nm[30];
        int st;
        float pr;
    }merc;
    
    do{
        printf("\nQuantas mercadorias pretende ler?");
        scanf("%d", &n);
    }while (n<0);

    merc m[n];
    char c[9];

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("\nQual � o c�digo da mercadoria?");
        gets(m[i].cod);
        printf("\nQual � o nome da mercadoria?");
        gets(m[i].nm);
        do{
            printf("Qual � o pre�o da mercadoria?");
            scanf("%f", &m[i].pr);
        }while (m[i].pr<0);
        do{
            printf("Qual � o stock da mercadoria?");
            scanf("%d", &m[i].st);
        }while (m[i].st<0);
    }

    fflush(stdin);
    printf("Introduza o c�digo da mercadoria que deseja introduzir:");
    gets(c);

    for(i=0;i<n;i++){
        
    }
}

void exc_2()
{
    
}

void exc_3()
{
    typedef struct 
    {
        char sexo;
        float idade;
    }pess;
    
    pess p[10];
    int i,masc,fem,m,f;

    for (i=0;1<10;i++)
    {
        do
        {
            printf("Qual � o seu sexo: ");
            scanf(" %c", &p[i].sexo);
            toupper(p[i].sexo);
        } while (p[i].sexo!='M' || p[i].sexo!='F');
        
        do
        {
            printf("Qual � a sua idade: ");
            scanf("%f", &p[i].idade);
        } while (p[i].idade<=0 || p[i].idade>=120);
        
        if (p[i].sexo=='M')
        {
            masc=masc+p[i].sexo;
            m++;
        }

        if (p[i].sexo=='F')
        {
            fem=fem+p[i].sexo;
            f++;
        }
    }

    printf("A m�dia das idades masculinas � %.2f e a m�dia das idades femininas � %.2f", masc/f,fem/f);
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
        while (opc<0 && opc>6);
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
            case 0:break;
        }
        system("\n\n\n\npause");
    }
    while (opc!=0);
}