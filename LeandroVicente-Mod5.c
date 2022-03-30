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

void exc_1()
{
    int n,k,m,max=0,min=999;
    typedef struct
    {
        char n[40];
        float p;
        int q;
    }ar;

    do
    {
        printf("\nQuantos artigos deseja: ");
        scanf("%d", &n);
    }while(n<0);

    ar arts[n];

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\nIntroduza o nome do artigo: ");
        gets(arts[i].n);

        do
        {
            printf("\nIntroduza o preço do artigo: ");
            scanf("%f", &arts[i].p);
        }while(arts[i].p<0);

        do
        {
            printf("\nIntroduza a quantidade de artigos: ");
            scanf("%d", &arts[i].q);
        }while(arts[i].q<0);

        if(arts[i].p>max)
        {
            max=arts[i].p;
            k=i;
        }

        if(arts[i].p<min)
        {
            min=arts[i].p;
            m=i;
        }
    }

    float piva[n];

    for(i=0;i<n;i++)
    {
        piva[i]=arts[i].p+arts[i].p*0.23;
    }

    printf("\n Artigos:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%s |", arts[i].n); printf("\t%.2f  |", arts[i].p*0.23); printf("\t %.2f ", piva[i]);
    }

    printf("\nO artigo mais barato é %s e o artigo mais barato é %s. ", arts[k].n,arts[m].n);
}

void exc_2()
{
        int m;

    do
    {
        printf("\nQuantos módulos tem cada aluno: ");
        scanf("%d", &m);
    }while(m<0);

    typedef struct
    {
        char n[40];
        float n1,n2;
    }modu;


    modu mod[m];
    float med[];

    do
    {
        for(i=0;i<m;i++)
        {
            printf("\nMódulo %d", i+1);
            fflush(stdin);

            printf("\nIntroduza o nome do aluno: ");
            gets(mod[i].n);

            do
            {
                printf("\nIntroduza a primeira nota: ");
                scanf("%f", &mod[i].n2);
            }while(mod[i].n1<0 || mod[i].n1>20);

           do
            {
                printf("\nIntroduza a segunda nota: ");
                scanf("%f", &mod[i].n2);
            }while(mod[i].n2<0 || mod[i].n2>20);
        }
        strupr(mod[i].n);
    }while(mod[i].n=='FIM');

}

void exc_3()
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