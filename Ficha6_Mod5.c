#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int i;

typedef struct
{
    char nome[50],sexo;
    int ano_nasc;
    float p,h;
}pessoa;



void introducao()
{

}


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

}

void exc_2()
{
    
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



