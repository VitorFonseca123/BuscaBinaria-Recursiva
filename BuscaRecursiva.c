#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void buscaBinaria(int vetor[], int x, int inicio, int fim)
{
    if (inicio > fim)return false;
    int metade=(inicio+fim)/2;
    if(vetor[metade]==x){
        printf("Encontrado na posicao: %d\n", metade);
        return true;
    }
    if(vetor[metade]<x)return buscaBinaria(vetor, x, metade+1,fim);
    else return buscaBinaria(vetor, x, inicio, metade-1);
}
int main()
{

    int vetor[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int x = 0;
    printf("Digite: \n");
    scanf("%d", &x);
    buscaBinaria(vetor, x, 0, n - 1);
}