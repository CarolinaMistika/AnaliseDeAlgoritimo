#include <stdio.h>

int main(){
char letra[5] ={'A','B','C','D','E'};
int grafo[5][5]={
    {0,0,1,0,0},
    {0,0,1,0,0},
    {1,1,0,1,1},
    {0,0,1,0,1},
    {0,0,1,1,0}};

int i;
int j;

    for(i=0; i<5;i++)
    {
        int qtde = 0;
        for(j=0; j<5;j++)
        {
            qtde += grafo[i][j];
        }
      printf("Linha %c tem o nivel %d",letra[i],qtde);
      printf("\n");
    }
return 0;
}
