#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

void exercicio01()
{
    char vetorPrimeiroNome[50];
    char vetorSegundoNome[50];

    cout << "Escreva o primeiro nome: ";
    cin.getline(vetorPrimeiroNome, size(vetorPrimeiroNome));

    cout << "Escreva o segundo nome: ";
    cin.getline(vetorSegundoNome, size(vetorSegundoNome));

    if (strcmp(vetorPrimeiroNome, vetorSegundoNome) == 0)
        cout << "\nAs string são iguais";
    else if (strcmp(vetorPrimeiroNome, vetorSegundoNome) < 0)
        cout << "\nO primeiro nome é lexicograficamente menor que o segundo nome";
    else
        cout << "\nO primeiro nome é lexicograficamente maior que o segundo nome";
}

void exercicio02()
{

    char vetorPrimeiroNome[50];
    char vetorSegundoNome[50];

    cout << "Escreva o primeiro nome: ";
    cin.getline(vetorPrimeiroNome, size(vetorPrimeiroNome));

    cout << "Escreva o segundo nome: ";
    cin.getline(vetorSegundoNome, size(vetorSegundoNome));

    int tamanhoDaString01 = strlen(vetorPrimeiroNome);
    int tamanhoDaString02 = strlen(vetorSegundoNome);

    cout << "Primeiro nome: " << vetorPrimeiroNome << endl
         << "Segunda letra do nome: " << vetorPrimeiroNome[1] << endl;
    cout << "Segundo nome: " << vetorSegundoNome << endl
         << "Penúltima letra do nome: " << vetorSegundoNome[tamanhoDaString02 - 2];
}

void exercicio03()
{
    int contador = 0;
    char vetorString[50];

    cout << "Escreva a string: ";
    cin.getline(vetorString, size(vetorString));

    int tamanhoDaString = strlen(vetorString);

    for (int i = 0; i < tamanhoDaString; i++)
    {
        if (vetorString[i] == 'a' || vetorString[i] == 'A')
        {
            contador++;
            vetorString[i] = 'b';
        }
    }

    cout << "Quantidade de letras 'a' na string: " << contador << endl
         << "String modificada: " << vetorString << endl;
}

void exercicio04()
{
    char cargoDoFuncionario[50];
    float salarioDoFuncionario = 0;
    float percentual = 0;

    cout << "Escreva o cargo do funcionario: ";
    cin.getline(cargoDoFuncionario, size(cargoDoFuncionario));
    cout << "Escreva o salario do funcionario: ";
    cin >> salarioDoFuncionario;
    
    if (cargoDoFuncionario == "Gerente")
    {
        percentual = 0.10;
       
    }

    else if (cargoDoFuncionario == "Engenheiro")
    {
        percentual = 0.20;
       
    }

    else if (cargoDoFuncionario == "Tecnico")
    {
        percentual = 0.30;
       
    }

    else{
        percentual = 0.05;
       
    }
    
    salarioDoFuncionario = salarioDoFuncionario * (1 + percentual);


    cout << "Cargo do funcionário: " << cargoDoFuncionario << endl << "Aumento do salario: " << percentual << endl << "Salario atualizado: " << salarioDoFuncionario;
}

int main()
{
    exercicio04();
    return 0;
}