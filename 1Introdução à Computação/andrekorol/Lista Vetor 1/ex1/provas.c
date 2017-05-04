#include <stdio.h>
#define QUESTOES 8
#define ALUNOS 10
#define RESPOSTA_NOTA 2

int main(void) {
    int i, j, nota;
    float aprovacao = 0.0;
    char questao_certa;
    char gabarito[QUESTOES];

    for (i = 0; i < QUESTOES; i++) {
	printf("Entre o gabarito da questão de numero %d:\n", i + 1);
	printf("(A)\t(B)\t(C)\t(D)\t(E)\n");
	scanf(" %c", &questao_certa);
	gabarito[i] = questao_certa;
    }
    struct {
	enum {is_int, is_char} type;
	union {
	    char resposta;
	    int nota;
	} valor; 
    } alunos[ALUNOS][QUESTOES][RESPOSTA_NOTA];

    for (i = 0; i < ALUNOS; i++) {
	for (j = 0; j < QUESTOES; j++) {
	    printf("Entre a resposta da questao %d do aluno de numero %d: \n", j +1, i + 1);
	    alunos[i][j][0].valor.resposta = is_char;
	    scanf(" %c", &alunos[i][j][0].valor.resposta);
	}
    }

    for (i = 0; i < ALUNOS; i++) {
	for (j = 0; j < QUESTOES; j++) {
	    alunos[i][j][1].valor.nota = is_int;
	    alunos[i][j][1].valor.nota = 0;
	}
    }
    
    for (i = 0; i < ALUNOS; i++) {
	for (j = 0; j < QUESTOES; j++) {
	    if (alunos[i][j][0].valor.resposta == gabarito[j])
		alunos[i][j][1].valor.nota++;
	}
    }
    for (i = 0; i < ALUNOS; i++) {
	nota = 0;
	for (j = 0; j < QUESTOES; j++) {
	    nota += alunos[i][j][1].valor.nota;
	}
	if (nota >= 6)
	    aprovacao += 1;
	printf("A nota do aluno de numero %d é igual a %d\n", i + 1, nota);
    }
    aprovacao = (aprovacao / (float)ALUNOS) * 100;
    printf("A percentagem de aprovação foi de %.0f%%\n", aprovacao);
}


