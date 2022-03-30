#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int i;


void menu()
{
    system("color 81");
    system("cls");
    printf("\n       Teste de Avaliação - Mod.5      ");
    printf("\n***************************************");
    printf("\n            1 - Exercício 1            ");
    printf("\n            2 - Exercício 2            ");
    printf("\n            3 - Exercício 3            ");
    printf("\n            0 - Sair                   ");
    printf("\n***************************************\n");

}



exc_2()
{
}

exc_3()
{
    typedef struct
    {
        char n[40],tel[9];
        int ano;
        float sal;
    }lala;
            
    lala func;
    int f;

    printf("Quantos funcionários são: ");
    scanf("%d", &f);

    for(i=0;i<f;i++)
    {
        fflush(stdin);
        printf("Introduza o seu nome: ");
        gets(func[i].n);

        printf("Introduza o seu contato: ");
        gets(func[i].tel);

        do
        {
            printf("Introduza o seu ano de nascimento: ");
            scanf("%d", &func[i].ano);
        }while(func[i].ano<1930 || func[i].ano>2022);

        do
        {
            printf("Introduza o seu salário: ");
            scanf("%f", &func[i].sal);
        }while(func[i].sal<0);
    }

    

    for(i=0;i<)
}



int main()
{
    int opc;

    setlocale(LC_ALL,"portuguese");

    do
    {
        menu();
        do
        {
            printf("Que opção deseja? ");
            scanf("%d", &opc);
        }while(opc<0 || opc>3);

        system("cls");

        switch(opc)
        {
        case 1: exc_1();
                break;
        case 2: exc_2();
                break;
        case 3: exc_3();
                break;
        case 0:
                break;
        }

        system("pause");
        system("cls");

    }while (opc!=0);
}
