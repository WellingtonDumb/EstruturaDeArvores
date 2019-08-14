#include <stdio.h>
#include <stdlib.h>

struct noArvovre{
  char info;
  struct noArvovre* esq;
  struct noArvovre* dir;
};

typedef struct noArvovre no;

no* criar_no(char info,no* esq, no* dir){
	no* n = malloc(sizeof(no* ));
	n -> info = info;
	n -> esq = esq;
	n -> dir = dir;
return n;
}

void imprimirArv(no* n){
   if (n != NULL){
	printf("%c", n -> info);
	imprimirArv(n -> esq);
	imprimirArv(n -> dir);
	}
}

void imprimirPre(no* n){
   if (n != NULL){
	printf("%c", n -> info);
	imprimirArv(n -> esq);
	imprimirArv(n -> dir);
	}
}

void imprimirEm(no* n){
   if (n != NULL){
   imprimirArv(n -> esq);
	printf("%c", n -> info);
	imprimirArv(n -> dir);
	}
}

void imprimirPos(no* n){
   if (n != NULL){
   imprimirArv(n -> esq);
   imprimirArv(n -> dir);
	printf("%c", n -> info);
	}
}

void main(){
	no* nono = criar_no('1',criar_no(('2'),NULL,NULL), criar_no(('3'),NULL,NULL));

   printf("\n Pre Ordem: ");
   imprimirPre(nono);
   printf("\n Em Ordem: ");
   imprimirEm(nono);
   printf("\n Pos ordem: ");
   imprimirPos(nono);

   printf("\n\n\n\n\n\n");
	return 0;

}







