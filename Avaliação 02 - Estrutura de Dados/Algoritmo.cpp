#include <iostream> 
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;
#define Tamanho 5
typedef struct {
	string Nome;
	double Salario;
} Funcionario;
typedef struct {
	Funcionario Pessoa[Tamanho];
	int Fim;
}Lista;
void Referencia() {
	system("cls"); printf("\n\n     Segunda Avaliação - [Estrutura de Dados]\n     Aluno - Luís Gustavo C. Lenzi [Ciência da Computação]\n     Professor - Alan Souza Prado");
}
void Iniciar(Funcionario *Dados, Lista* Vetor) {
	for (int i = 0; i <= Tamanho; i++) {
		Vetor->Pessoa[i].Salario = NULL;
	}
	Vetor->Fim = 0;
}
void Inserir(Funcionario Dados, Lista *Vetor) {
	if (Vetor->Fim == Tamanho) {
		Referencia();
		printf("\n\n     [Lista Cheia]"); cout << "\n\n"; system("pause");
	}
	else{
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |      I   N   S   E   R   I   N   D   O      |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [ - Funcionário - ]");
		/*Recebe Nome >*/printf("\n     [Nome] - Digite qual é o nome do funcionário >: "); getline(cin, Dados.Nome);
		/*Recebe Salário >*/printf("     [Salário] - Digite qual é o salário do funcionário >: R$ "); cin >> Dados.Salario; system("cls");
		Vetor->Pessoa[Vetor->Fim].Nome = Dados.Nome;
		Vetor->Pessoa[Vetor->Fim].Salario = Dados.Salario;
		Vetor->Fim++;
	}
}
void Excluir(Funcionario Dados, Lista *Vetor) {
	string Nome;
	int Retorno = 0;
	if (Vetor->Fim == NULL) {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Funcionário Atribuído]"); cout << "\n\n";  system("pause");
	}
	else {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |        E   X   C   L   U   Í   D   O        |" << endl;
		cout << "     -----------------------------------------------" << endl;
		/*Recebe Nome >*/printf("\n     [Nome] - Digite qual o nome do funcionário que deseja consultar >: "); getline(cin, Nome);
		for (int i = 0; i < Vetor->Fim; i++) {
			if (Nome == Vetor->Pessoa[i].Nome) {
				Referencia();
				cout << "\n\n     -----------------------------------------------" << endl;
				cout << "     |        E   X   C   L   U   Í   D   O        |" << endl;
				cout << "     -----------------------------------------------" << endl;
				printf("\n     [Funcionário Excluído]"); cout << "\n\n"; system("pause");
				Vetor->Fim--;
				Retorno++;
			}
		}
		if (Retorno == 0) {
			Referencia();
			cout << "\n\n     -----------------------------------------------" << endl;
			cout << "     |        E   X   C   L   U   Í   D   O        |" << endl;
			cout << "     -----------------------------------------------" << endl;
			printf("\n     [Funcionário Não Encontrado, Certifique-se De Ter Digitado Corretamente]"); cout << "\n\n"; system("pause");
		}
	}
}
void Esvaziar(Lista* Vetor) {
	if (Vetor->Fim == NULL) {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |    E   S   V   A   Z   I   A   N   D   O    |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Funcionário Atribuído]"); cout << "\n\n";  system("pause");
	}
	else {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |    E   S   V   A   Z   I   A   N   D   O    |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Lista Esvaziada]"); cout << "\n\n";  system("pause");
	}
}
void Exibir(Funcionario* Dados, Lista* Vetor) {
	if (Vetor->Fim == NULL) {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |        E   X   I   B   I   N   D   O        |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nada a Exibir]"); cout << "\n\n"; system("pause");
	}
	else {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |        E   X   I   B   I   N   D   O        |" << endl;
		cout << "     -----------------------------------------------" << endl;
		for (int i = 0; i < Vetor->Fim; i++) {
			cout << setprecision(2) << fixed << "\n     [Nº - " << i + 1 << "] - Nome do Funcionário: " << Vetor->Pessoa[i].Nome << " - Salário: R$ " << Vetor->Pessoa[i].Salario;
		}
		cout << "\n\n"; system("pause");
	}
}
void Livres(Funcionario* Dados, Lista* Vetor) {
	Referencia();
	cout << "\n\n     -----------------------------------------------" << endl;
	cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
	cout << "     -----------------------------------------------" << endl;
	cout << "\n     A Quantidade de elementos na lista equivale a: [" << Vetor->Fim << "]" << endl;
	cout << "     A Quantidade de campos livres equivale a: [" << Tamanho - Vetor->Fim << "]" << endl << endl;
	system("pause");
	if(Vetor->Fim == NULL){
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Funcionário Atribuído]"); cout << "\n\n";  system("pause");
	}
}
void Consultar(Funcionario* Dados, Lista* Vetor) {
	string Nome;
	int Retorno = 0;
	if (Vetor->Fim == NULL) {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Funcionário Atribuído]"); cout << "\n\n";  system("pause");
	}
	else {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		/*Recebe Nome >*/printf("\n     [Nome] - Digite qual o nome do funcionário que deseja consultar >: "); getline(cin, Nome);
		for (int i = 0; i < Vetor->Fim; i++) {
			if (Nome == Vetor->Pessoa[i].Nome) {
				Referencia();
				cout << "\n\n     -----------------------------------------------" << endl;
				cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
				cout << "     -----------------------------------------------" << endl;
				cout << setprecision(2) << fixed << "\n    [Nº - " << i + 1 << "] - Nome do Funcionário: " << Nome << " - Salário : R$ " << Vetor->Pessoa[i].Salario; cout << "\n\n";  system("pause");
				Retorno++;
			}
		}
		if (Retorno == 0) {
			Referencia();
			cout << "\n\n     -----------------------------------------------" << endl;
			cout << "     |  C   O   N   S   U   L   T   A   N   D   O  |" << endl;
			cout << "     -----------------------------------------------" << endl;
			printf("\n     [Funcionário Não Encontrado, Certifique-se De Ter Digitado Corretamente]"); cout << "\n\n"; system("pause");
		}
	}
}
void Salario(Funcionario* Dados, Lista* Vetor) {
	if(Vetor->Fim == NULL){
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |      O   R   D   E   N   A   N   D   O      |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Valor Atribuído]"); cout << "\n\n"; system("pause");
	}
	else {
		int i, j;
		double k;
		for (i = 0; i < Vetor->Fim; i++) {
			for (j = i + 1; j < Vetor->Fim; j++) {
				if (Vetor->Pessoa[i].Salario < Vetor->Pessoa[j].Salario) {
					k = Vetor->Pessoa[i].Salario;
					Vetor->Pessoa[i].Salario = Vetor->Pessoa[j].Salario;
					Vetor->Pessoa[j].Salario = k;
				}
			}
		}
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |  O   R   D   E   M                          |" << endl;
		cout << "     |  D   E   C   R   E   S   C   E   N   T   E  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		for (i = 0; i < Vetor->Fim; i++) {
			cout << setprecision(2) << fixed << "\n     [" << i + 1<< "º] - Salário: R$ " << Vetor->Pessoa[i].Salario;
		}
		cout << "\n\n"; system("pause");
	}
}
void Nome(Funcionario* Dados, Lista* Vetor) {
	if (Vetor->Fim == NULL) {
		Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |      O   R   D   E   N   A   N   D   O      |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     [Nenhum Valor Atribuído]"); cout << "\n\n"; system("pause");
	}
	else {
	string k;
	double l;
	Referencia();
	cout << "\n\n     -----------------------------------------------" << endl;
	cout << "     |    O   R   D   E   M                        |" << endl;
	cout << "     |    A   L   F   A   B   É   T   I   C   A    |" << endl;
	cout << "     -----------------------------------------------" << endl;
	for (int i = 0; i < Vetor->Fim; i++) {
		for (int j = i + 1; j < Vetor->Fim; j++) {
			if (Vetor->Pessoa[j].Nome < Vetor->Pessoa[i].Nome) {
				k = Vetor->Pessoa[j].Nome;
				Vetor->Pessoa[j].Nome = Vetor->Pessoa[i].Nome;
				Vetor->Pessoa[i].Nome = k;
			}
		}
		cout << setprecision(2) << fixed << "\n     [" << i + 1 << "º] - Nome: " << Vetor->Pessoa[i].Nome;
		}
	cout << "\n\n"; system("pause");
	}
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	int j;
	Lista Lista;
	Funcionario Funcionario;
	Iniciar(&Funcionario, &Lista);
	int Menu;
	do {Referencia();
		cout << "\n\n     -----------------------------------------------" << endl;
		cout << "     |                M   E   N   U                |" << endl;
		cout << "     -----------------------------------------------" << endl;
		cout << "     |   1 - Inserir                               |" << endl;
		cout << "     |   2 - Excluir                               |" << endl;
		cout << "     |   3 - Esvaziar                              |" << endl;
		cout << "     |   4 - Exibir                                |" << endl;
		cout << "     |   5 - Número de Elementos + Campos Livres   |" << endl;
		cout << "     |   6 - Consultar                             |" << endl;
		cout << "     |   7 - Ordenar por Nome                      |" << endl;
		cout << "     |   8 - Ordenar por Salário                   |" << endl;
		cout << "     |   0 - Sair                                  |" << endl;
		cout << "     -----------------------------------------------" << endl;
		printf("\n     Digite o número de referência da opção desejada e tecle Enter >: "); cin >> Menu;
		cin.ignore();
		switch (Menu) {
		case 1:
			Inserir(Funcionario, &Lista); break;
		case 2:
			Excluir(Funcionario, &Lista); break;
		case 3:
			Esvaziar(&Lista);
			Iniciar(&Funcionario, &Lista); break;
		case 4:
			Exibir(&Funcionario, &Lista); break;
		case 5: 
			Livres(&Funcionario, &Lista); break;
		case 6:
			Consultar(&Funcionario, &Lista); break;
		case 7:
			Nome(&Funcionario, &Lista); break;
		case 8:
			Salario(&Funcionario, &Lista); break;
		case 0:
			exit(0); break;}} while (Menu != 0);
	return(0);}
