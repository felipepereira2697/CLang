#include <stdio.h>
#include <stdlib.h>

int main (){
	
	FILE * fPointer;
	fPointer = fopen("arquivoTeste.txt","w");
	
	fprintf(fPointer, "Teste de escrita no arquivo\n");
	
	fclose(fPointer);
	
	return 0;
}
