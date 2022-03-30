#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int i,n;

typedef struct
    {
        char nome[25],endereço[25],ec,s;
        char endereco[25];
        int cc,tel,id,codp;
        int codp;
        float sal;
    } pessoa;



void ex3()
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
            printf("\nIntroduza o código do produto: ");
            scanf("%d", &prod[i].cod);
        } while (prod[i].cod<0);
    
        
        printf("\nIntroduza a descrição do produto: ");
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
            printf("\nIntroduza o preço do produto: ");
            scanf("%f", &prod[i].p);
        } while (prod[i].p<0);
        
        system("pause");
        system("cls");
    }

    for(i=0;i<n;i++)
    {
        if(prod[i].sa < prod[i].sm)
        {
            printf("\no código do produto é: %d", prod[i].cod);
            printf("\na descrição do produto é: %s", prod[i].des);
            printf("\no stock minimo do produto é: %d",prod[i].sa);
            printf("\no stock atual é: %d", prod[i].sa);
            printf("\no preço do produto é: %.2f", prod[i].p);
        }
        system("pause");
        system("cls");
    }
}

void ex2()
{
    typedef struct
    {
        char tip[20],end[100],l[20],sit[15];
        float vv;
    } imoveis;

    int flag = 0;
    char pesq[25];
    imoveis imo[50];

    do
    {
        printf("\nQuantos imoveis é que quer registar?\n");
        scanf("%d", &n);
    } while (n<0);
    
    

    for(i=0;i<n;i++)
    {
        do
        {
            fflush(stdin);
            printf("\nIntroduza o tipo de imóvel que tem[loja/apartamento/casa]: ");
            gets(imo[i].tip);
            strupr(imo[i].tip);
        } while (strcmp(imo[i].tip,"LOJA")!=0 || strcmp(imo[i].tip,"CASA")!=0 || strcmp(imo[i].tip,"APARTAMENTO")!=0);
        

        fflush(stdin);
        printf("\nIntroduza o seu endereço: ");
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
            printf("\nIntroduza a sua situação[aluguer/venda]: ");
            gets(imo[i].sit);
            strupr(imo[i].sit);
        } while (strcmp(imo[i].sit,"ALUGUER")!=0 || strcmp(imo[i].sit,"VENDA")!=0);
        

        

        system("cls");
    }

    do
    {
        printf("\nQual é a situação que deseja: ");
        gets(pesq);
        strupr(imo[i].sit);
    } while (strcmp(imo[i].sit,"ALUGUER")!=0 || strcmp(imo[i].sit,"VENDA")!=0);
   


    for(i = 0; i < n; i++)
    {
        if(strcmp(imoveis[i].situacao, pesq) == 0)
        {
           flag = 1;
            printf("\n");
            printf("o tipo de imóvel é %s", imo[i].tipo);
            printf("\n");
            printf("o endereço é %s", imoveis[i].endereco);
            printf("\n");
            printf("a localidade é %s", imoveis[i].localidade);
            printf("\n");
            printf("o valor de venda é %.2f", imoveis[i].valor_venda);
            printf("\n");
            printf("e a situação que inseriu é %s", pesq);
            printf("\n");
        }
    }

    if(flag = 1)
    {
        printf("\n\na pesquisa terminou\n\n");
    }
}


void ex1()
{
    int i;
    ex1_struct func[50];

    for(i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("insira o seu nome: ");
        gets(func[i].nome);
        printf("\n");

        fflush(stdin);
        printf("insira o seu endereço: ");
        gets(func[i].endereco);
        printf("\n");

       do
       {
        printf("insira o seu salário: ");
        scanf("%f", &func[i].salario);
        printf("\n");
       } while(func[i].salario > 100000 || func[i].salario < 0);

       do
       {
        printf("insira o seu numero de contribuinte: ");
        scanf("%d", &func[i].cart_cidadao);
        printf("\n");
       } while(func[i].cart_cidadao < 100000000 || func[i].cart_cidadao > 999999999);

       do
       {
        printf("insira o seu código postal: ");
        scanf("%d", &func[i].cod_postal);
        printf("\n");
       } while(func[i].cod_postal < 1000 || func[i].cod_postal > 9999);

       do
       {
        printf("insira o seu estado civil (S ou C): ");
        scanf(" %c", &func[i].estado_civil);
        printf("\n");
       } while(func[i].estado_civil == 's' && func[i].estado_civil == 'S' && func[i].estado_civil == 'c' && func[i].estado_civil == 'C');

       do
       {
        printf("insira o seu numero de telemovel: ");
        scanf("%d", &func[i].telefone);
        printf("\n");
       } while(func[i].telefone > 999999999 || func[i].telefone < 100000000);

       do
       {
        printf("insira a sua idade: ");
        scanf("%d", &func[i].idade);
        printf("\n");
       } while(func[i].idade < 0 || func[i].idade > 100);

       do
       {
        printf("insira o seu sexo: ");
        scanf(" %c", &func[i].sexo);
        printf("\n");
       } while(func[i].sexo != 'm' && func[i].sexo != 'f');

      system("cls");
    }

    for(i = 0; i < 5; i++)
    {
        if(func[i].salario > 500 && func[i].estado_civil == 'c' && func[i].sexo == 'm')
        {
            printf("%s\n", func[i].nome);
        }
    }
}

int main()
{
    int op;
    setlocale(LC_ALL, "portuguese");

   do
   {
    printf("**********************\n");
    printf("*   Menu Principal   *\n");
    printf("**********************\n");
    printf("1 - ex1\n");
    printf("2 - ex2\n");
    printf("3 - ex3\n");
    printf("0 - sair\n");
    printf("**********************\n");
    printf("escolha uma opção --> ");
    scanf("%d", &op);

    switch(op)
    {
        case 0:printf("\nprog;break;
        case 1: ex1();break;
        case 2: ex2();break;
        case 3: ex3();break;
    }
   } while(op != 0);
}
