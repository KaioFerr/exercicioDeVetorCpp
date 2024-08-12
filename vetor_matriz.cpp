#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdbool.h>

using namespace std;

void exercicio01(){
    cout << endl << "=== EXERCICIO 01 =====" << endl;
    int vetor[5];
    int soma = 0;
    for (int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
        if (vetor[i] % 2 != 0){
            soma += vetor[i];
        }
    }
    cout << "Soma: " << soma << endl;
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

    cout << "Preco Total: " << precoTotal << endl;
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
    cout << "Desvio Padrão: " << desvioPadrao << endl;
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

    cout << "Os dois maiores Elementos: " << lista[tamanhoDaLista-2] << ", " << lista[tamanhoDaLista - 1] << endl;
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
    int m, n;

    cout << "Digite a quantidade de linhas (M): ";
    cin >> m;

    cout << "Digite a quantidade de colunas (N): ";
    cin >> n;

    int primeiraMatriz[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Digite o valor da posicao " << i << " e " << j << ": ";
            cin >> primeiraMatriz[i][j];
        }
    }

    cout << endl << "Primeira Matriz:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << primeiraMatriz[i][j];
        }
        cout << endl;
    }

    cout << endl << "Matriz Transposta:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "  " << primeiraMatriz[j][i];
        }
        cout << endl;
    }

}

int main() {

    bool verificador = true;

    while (verificador) {

        int opcao;
        cout << endl << "===== EXERCICIOS DE VETORES ==" << endl << "Escolha uma das opcoes abaixo:" << endl;
        for (int i = 1; i <= 6; i++){
            cout << i << " - exercicio 0" << i << endl;
        }

        cout << "Digite uma opcao (digite 7 para sair): ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                exercicio01();
                break;
            case 2:
                exercicio02();
                break;
            case 3:
                exercicio03();
                break;
            case 4:
                exercicio04();
                break;
            case 5:
                exercicio05();
                break;
            case 6:
                exercicio06();
                break;
            case 7:
                verificador = false;
                break;
            default:
                cout << "Voce digitou a opcao errada" << endl;
                break;
        }
    }
    return 0;
}
