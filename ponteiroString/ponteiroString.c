#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char lp1[] = "Javascript";
	
	//isso aqui NÃO É UMA CONSTANTE, é um ponteiro, podemos trocar
	//lp2 está guardando o endereço de memória onde a string começa
	char * lp2 = "Ruby";
	
	//aqui estamos dizendo: coloque tudo na tela até que  tenha um 0
	puts(lp2);
	//por não ser uma constante podemos trocar
	//não precisamos de strcpy nem nada do genero, tratamos como se fosse uma variavel int ou float
	lp2 = "De Ruby para PHP";
	puts(lp2);
	
	// Muito mais fácil, por não ser uma constante, manipularmos o ponteiro de forma que possamos trocar o valor da string de forma mais fácil
	//apesar do ponteiro guardar o endereço da memória, podemos tratar como string com o  puts
	
	printf("Endereco de lp2 %p\n ", &lp2);
	
	//lp2 = "Java" não podemos fazer isso pois é uma constante, se tentarmos isso causaremos um erro
	//por ser um ponteiro, baguncariamos tudo, perderiamos onde os elementos estão
	//lp2[] = "PHP" isso tbm não funciona
	
	return 0;
}
