#include <stdio.h>
#include <stdlib.h>
int main (){
	//Declaração de variável
	char nome[100] = "Felipe Pereira";
	int age = 19;
	float number = 14.14;
	
	
	
	//Testes de execução
	printf("%s\n",nome);
	//vamos printar o endereço de memória que esta variavel esta localizada
	printf("%p\n", &age);
	//faremos o mesmo para a variavel float
	printf("%p\n", &number);
	//o mesmo para char
	printf("%p\n", &nome);
	
	//Programa básico que irá printar o endereço de memória da variavel, seu nome e valor
	// \t significa tab
	printf("Endereco \t Name \t Value \n");
	printf("%p \t %s \t %d\n ",&age, "Age", age);	
	
	int *pAge = &age;
	printf("%p \t %s \t %d\n ",pAge, "Age", age);
	//Os prints são iguais, no entanto podemos agora ter acesso ao endereço de memória da variavel age através da nossa variavel
	//pAge que é um ponteiro que recebeu o endereço de memória, é não precisamos acessar a posição da memória diretamente com &age
	
	//Agora vamos printar o endereço de memória do ponteiro pAge seu nome e seu valor, obviamente os ponteiros também são guardados na memória
	printf("%p \t %s \t %p\n ",&pAge, "pAge", pAge);
	
	
	
	//Curiosidade: se tentarmos adicionar no espaço em branco uma letra, obtemos um erro
	//nome[6] = 'B';
	//printf("%s",nome);
	
	
	
	return 0;
}
