#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char lp1[] = "Javascript";
	
	//isso aqui N�O � UMA CONSTANTE, � um ponteiro, podemos trocar
	//lp2 est� guardando o endere�o de mem�ria onde a string come�a
	char * lp2 = "Ruby";
	
	//aqui estamos dizendo: coloque tudo na tela at� que  tenha um 0
	puts(lp2);
	//por n�o ser uma constante podemos trocar
	//n�o precisamos de strcpy nem nada do genero, tratamos como se fosse uma variavel int ou float
	lp2 = "De Ruby para PHP";
	puts(lp2);
	
	// Muito mais f�cil, por n�o ser uma constante, manipularmos o ponteiro de forma que possamos trocar o valor da string de forma mais f�cil
	//apesar do ponteiro guardar o endere�o da mem�ria, podemos tratar como string com o  puts
	
	printf("Endereco de lp2 %p\n ", &lp2);
	
	//lp2 = "Java" n�o podemos fazer isso pois � uma constante, se tentarmos isso causaremos um erro
	//por ser um ponteiro, baguncariamos tudo, perderiamos onde os elementos est�o
	//lp2[] = "PHP" isso tbm n�o funciona
	
	return 0;
}
