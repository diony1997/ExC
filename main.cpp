#include <iostream>
#include <string.h>
using namespace std;

ex3()
{


    int n;
    while(n!= 0)
    {
        scanf("%d",&n);
        int qtdVotos[n][n];
        char aux;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%c",&aux);
                qtdVotos[i][j] = aux -'o';
            }
        }

        int maiorVotos[n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(qtdVotos[i][j]!=0)
                {
                    maiorVotos[i]+=1;
                }
            }
        }

        int maior = -1;
        for(int i = 0; i < n; i++)
        {
            if(maiorVotos[i]>maior)
            {
                maior = maiorVotos[i];
            }
        }
        printf("%d",maior);

    }

}

ex4()
{
    int atual = 1,tamanho;
    while(tamanho > 0)
    {
        scanf("%d",&tamanho);
        char nome[tamanho][20];
        int notas[tamanho];
        for(int i = 0; i < tamanho; i++)
        {
            scanf("%s %d",&nome[i],&notas[i]);
        }
        int menor = 40,pos = 0;
        for(int i = 0; i < tamanho; i++)
        {
            if(menor>notas[i])
            {
                menor = notas[i];
                pos = i;
            }
        }
        int aux = 0;
        int vetAux[tamanho];
        for(int i = 0; i < tamanho; i++)
        {
            if(menor == notas[i])
            {
                vetAux[aux++]=i;
            }
        }
        if(aux>1)
        {
            char letra = nome[pos][0];
            printf("%c",letra);
            for(int i = 0; i < aux; i++)
            {
                if(letra < nome[vetAux[i]][0])
                {
                    letra = nome[vetAux[i]][0];
                    pos = vetAux[i];
                }
            }
        }
        if(tamanho != 0)
        {
            printf("Instancia %d\n%s\n",atual,nome[pos]);
            printf("\n");
            atual++;
        }
    }
}

ex6()
{
    int a,b,div,total,qtd = 0;
    while(a!= 0 || b != 0)
    {
        if(a!= 0 || b != 0){
        int* num;
        num = (int*) malloc(2*sizeof(int));
        scanf("%d %d",&a,&b);
        for(int i = a+1; i < b; i++)
        {
            total = 0;
            for (int j = 1; j < i; j++)
            {
                div = i%j;
                if (div == 0)
                {
                    total+=j;
                }
            }
            if(total == i)
            {
               num[qtd++] = i;
               num = (int*) realloc(num,qtd+1*sizeof(int));
            }
        }
        printf("%d\n",qtd);
        for(int i = 0; i<qtd;i++){
            printf("%d\n",num[i]);
        }
        printf("\n");
        qtd = 0;
        free(num);
        }
    }

}

int main()
{
    ex6();
    return 0;
}
