#include <stdio.h>
#include <stdlib.h>

int main (){
	int i;
	int vetor[5] = {9,6,14,4,2};
	
	
	//para cada elemento do array vamos mostrar o endere�o de mem�ria de cada um
	for(i=0;i<5;i++){
		printf("vetor[%d] \t %p \t %d \n ",i,&vetor[i],vetor[i]);
	}
	
	
	//para todo vetor somente com nome sem [] � apenas um ponteiro para o primeiro elemento desse vetor, inclusive
	//pode se conferir que apresentam o mesmo endere�o de mem�ria
	//Concluimos que a palavra vetor � um ponteiro para o seu primeiro elemento, por isso neste caso
	//nao precisamos do &, pq vetor j� � o endere�o de mem�ria
	printf("\nvetor \t\t %p \n", vetor);
	
	//no entanto, podemos deferencia lo se quisermos usando o *
	
	//quando isso acontece, ele vai at� o valor do primeiro elemento e tem o seu valor (no caso aqui ser� 9)
	//a deferencia de vetor � 9
	//temos como andar com essa deferencia tamb�m, por exemplo *(vetor+2) vamos obter o valor 14
	printf("\n *vetor \t\t %d \n",*vetor);
	
	//Perceba que aqui n�o muda, o endere�o de mem�ria continua o mesmo.
	printf("\nvetor \t\t %p \n", vetor);
	return 0;
}
