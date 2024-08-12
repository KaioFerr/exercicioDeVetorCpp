#include <iostream>
#include <math.h>
#include<algorithm>

using namespace std;

void exercicio01(){
    int vetor[5];
    int soma = 0;
    for (int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
        if (vetor[i] % 2 != 0){
            soma += vetor[i];
        }
    }
    cout << soma;
}

void exercicio02(){
    int precoTotal = 0;
    float vetorQuantidade[5];
    float vetorPreco[5];
    for (int i = 1; i < 6; i++){
        cout << "Digite a quantidade do item " << i << ": ";
        cin >> vetorQuantidade[i-1];
    }

    for (int i = 1; i < 6; i++){
        cout << "Digite o preco do produto " << i << ": ";
        cin >> vetorPreco[i-1];
        fflush(stdin);
    }

    for (int i = 1; i < 6; i++){
        float precoDeCadaItem = vetorQuantidade[i-1] * vetorPreco[i-1];
        cout << "preco do item " << i << ": " << precoDeCadaItem << endl;
        precoTotal += precoDeCadaItem;
    }

    cout << "Preco Total: " << precoTotal;
}


void exercicio03(){
    float vetorNotas[5];
    float vetorDesvios[5];
    float somatorio, media, desvio, desvioPadrao;
    for (int i = 1; i < 6; i++){
        cout << "Digite a nota do aluno " << i << ": ";
        cin >> vetorNotas[i-1];
        media += vetorNotas[i-1] / 5;
    }
    
    for (int i = 1; i < 6; i++){
        desvio = (vetorNotas[i-1] - media);
        vetorDesvios[i-1] = desvio;
        cout << "\nDesvio " << i << ": " << vetorDesvios[i-1]; 
        somatorio += pow((desvio), 2);
    }

    desvioPadrao = sqrt((somatorio/5));
    cout << "Desvio Padrão: " << desvioPadrao;
}

void exercicio04(){
    int tamanhoDaLista;
    
    cout << "Digite o tamanho da sua lista (máximo 10): ";
    cin >> tamanhoDaLista;
    
    int lista[tamanhoDaLista];
    
    for (int i = 0; i < tamanhoDaLista; i++){
        cout << "Digite o elemento " << i+1 << ": ";
        cin >> lista[i];
    }
    
    sort(lista, lista + tamanhoDaLista);
    cout << endl;
    
    for (int i = 0; i < tamanhoDaLista; i++){
        cout << "Elementos " << i+1 << ": " << lista[i] << endl;
        fflush(stdin);
        
    }
    
    cout << "Os dois maiores Elementos: " << lista[tamanhoDaLista-2] << ", " << lista[tamanhoDaLista - 1];   
}

void exercicio05() {
    int tamanhoDoVetor = 3;
    int primeiroVetor[tamanhoDoVetor];
    int segundoVetor[tamanhoDoVetor];
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cout << "Digite o elemento de posicao " << i << ": ";
        cin >> primeiroVetor[i];
        if (i % 2 == 0){
            segundoVetor[i] = primeiroVetor[i] * 5;
        }else segundoVetor[i] = primeiroVetor[i] + 5;
    }
    cout << endl;
    cout << "Primeiro Vetor: " << endl;
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cout << "elemento da posicao " << i << ": " << primeiroVetor[i] << endl;
    }
    cout << endl;
    cout << "Segundo Vetor: " << endl;
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
         cout << "elemento da posicao " << i << ": " << segundoVetor[i] << endl;
    }    
}

void exercicio06() {
    int m = 2, n = 3;
    int primeiraMatriz[m][n];
    int matrizTransposta[m][n];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite o valor da posicao " << i << " e " << j << ": ";
            cin >> primeiraMatriz[i][j];
        }
        
    }

    cout << endl << "Primeira Matriz:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " " << primeiraMatriz[i][j];
        }
        cout << endl;
    }
    
}

int main() {
    exercicio06();
    return 0;
}

