#include <stdio.h>
#include <stdlib.h>
int main (){
	//Declara��o de vari�vel
	char nome[100] = "Felipe Pereira";
	int age = 19;
	float number = 14.14;
	
	
	
	//Testes de execu��o
	printf("%s\n",nome);
	//vamos printar o endere�o de mem�ria que esta variavel esta localizada
	printf("%p\n", &age);
	//faremos o mesmo para a variavel float
	printf("%p\n", &number);
	//o mesmo para char
	printf("%p\n", &nome);
	
	//Programa b�sico que ir� printar o endere�o de mem�ria da variavel, seu nome e valor
	// \t significa tab
	printf("Endereco \t Name \t Value \n");
	printf("%p \t %s \t %d\n ",&age, "Age", age);	
	
	int *pAge = &age;
	printf("%p \t %s \t %d\n ",pAge, "Age", age);
	//Os prints s�o iguais, no entanto podemos agora ter acesso ao endere�o de mem�ria da variavel age atrav�s da nossa variavel
	//pAge que � um ponteiro que recebeu o endere�o de mem�ria, � n�o precisamos acessar a posi��o da mem�ria diretamente com &age
	
	//Agora vamos printar o endere�o de mem�ria do ponteiro pAge seu nome e seu valor, obviamente os ponteiros tamb�m s�o guardados na mem�ria
	printf("%p \t %s \t %p\n ",&pAge, "pAge", pAge);
	
	
	
	//Curiosidade: se tentarmos adicionar no espa�o em branco uma letra, obtemos um erro
	//nome[6] = 'B';
	//printf("%s",nome);
	
	
	
	return 0;
}
