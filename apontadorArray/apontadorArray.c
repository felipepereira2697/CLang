#include <stdio.h>
#include <stdlib.h>

int main (){
	int i;
	int vetor[5] = {9,6,14,4,2};
	
	
	//para cada elemento do array vamos mostrar o endereço de memória de cada um
	for(i=0;i<5;i++){
		printf("vetor[%d] \t %p \t %d \n ",i,&vetor[i],vetor[i]);
	}
	
	
	//para todo vetor somente com nome sem [] é apenas um ponteiro para o primeiro elemento desse vetor, inclusive
	//pode se conferir que apresentam o mesmo endereço de memória
	//Concluimos que a palavra vetor é um ponteiro para o seu primeiro elemento, por isso neste caso
	//nao precisamos do &, pq vetor já é o endereço de memória
	printf("\nvetor \t\t %p \n", vetor);
	
	//no entanto, podemos deferencia lo se quisermos usando o *
	
	//quando isso acontece, ele vai até o valor do primeiro elemento e tem o seu valor (no caso aqui será 9)
	//a deferencia de vetor é 9
	//temos como andar com essa deferencia também, por exemplo *(vetor+2) vamos obter o valor 14
	printf("\n *vetor \t\t %d \n",*vetor);
	
	//Perceba que aqui não muda, o endereço de memória continua o mesmo.
	printf("\nvetor \t\t %p \n", vetor);
	return 0;
}
