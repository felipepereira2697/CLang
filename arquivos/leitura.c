#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fPointer;
	//o segundo param�tro r, significa read, queremos ler o arquivo texto arquivoTeste
	fPointer = fopen("arquivoTeste.txt","r");
	
	//lendo um arquivo linha por linha
	char singleLine[150];
	
	//continue o loop at� achar o fim do arquivo
	while(!feof(fPointer)){
		//fgets pega uma linha
		fgets(singleLine,150,fPointer);
		puts(singleLine);
	}
	
	fclose(fPointer);
	
	return 0;
}
