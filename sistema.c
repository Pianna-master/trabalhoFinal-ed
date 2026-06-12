#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TADs principais

typedef struct user {
	char *nome;
	char *email;
} Usuario; 

typedef struct livr {
	int id;
	char *titulo;
	char *autor;
	int dataPub;
	int status;
	char *email;
} Livro; 

// TADs para estrutura de dados

typedef struct nodol {
	Livro valor;
	struct nodol *right, *left;
} NodeLivro; 

typedef struct nodou {
	Usuario valor;
	struct nodol *right, *left;
} NodeUsuario;

typedef struct tree {
	NodeLivro raizLivro;
	NodeUsuario raizUsuario;
} Arvore;

int main(void)
{
	
	return 0;
}

