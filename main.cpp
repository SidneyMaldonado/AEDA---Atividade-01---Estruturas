#include <iostream>

typedef struct aluno{
	char nome[20];
	double fone;
	int idade;
} Aluno;
	
typedef struct professor{
	char nome[20];
	double salario;
	int idade;
} Professsor;

int main(int argc, char** argv) {
// nunca misturar tipos de dados diferentes
	
	// nunca se deve chumbar dados no algoritmo
	int num[10] = {7,6,9,8,2,14,7,15,21,17};
	// sempre deve inicializar as variaveis
	int tam = 10, i = 0;
	printf("valor -> %i", num[5]);
	printf("\nvalor -> %i", num[5]+num[8]);
	printf("\nvalor -> %i", num[5+2]);
	printf("\nvalor -> %i", num[i]);
	for(i=0;i<10;i++){
		printf("\nx -> %i valor -> %i", i, num[i]);
	}
	// para somar os valores de um vetor
	int soma = 0;
	
	// entender como resolver o problema?
	// percorrer o vetor
	for(i=0;i<10;i++){
		soma = soma + num[i];
	}
	printf("\n soma -> %i", soma);
	printf("\n----------------------");
	
	Aluno turma[3];
///	turma[0].nome = "n";
	turma[0].idade = 25;
	turma[0].fone = 6546546456;
	
	for(i=0;i<3;i++){
		printf("\nDigite o nome:");
		scanf("%s", &turma[i].nome);
		printf("\nDigite a idade:");
		scanf("%i", &turma[i].idade);
		printf("\nDigite o telefone:");
		scanf("%i", &turma[i].fone);
	}

// para o vetor num procurar e imprimir:
// - menor valor	
// - maior valor

// Imprimir todos registros estrutura alunos
// fazer a entrada de dados para 5  professores
// Imprimir todos os registros da estrutura professores	

	
	
	return 0;
}





