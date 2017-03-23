#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Nomes: Felipe Alberto Pereira, Matheus Cardoso e Matheus Rodrigues 
//TIA: 31559026, 31550576, 31507646
int main(){
	
	int x = 10;
	int z = 0;
	int y = 20;
	int *p1,*p2;
	p1 = &x;
	p2 = &y;
	//Os endereços permancerão os mesmos
	printf("O end de memoria de x: %p\n",&x);
	printf("O end de memoria de y: %p\n",&y);
	printf("O end de memoria de z: %p\n",&z);
	printf("O end de memoria de p1: %p\n",&p1);
	printf("O end de memoria de p2: %p\n",&p2);
	
	
	printf("O valor de x: %d\n",x);
	printf("O valor de y: %d\n",y);	
	printf("O valor de z: %d\n",z);
	printf("valor de p1: %p\n",p1);
	printf("valor de p2: %p\n",p2);
	
	printf("O conteudo de p1 %d\n ",*p1);
	printf("O conteudo de p2 %d\n ",*p2);
	
	getch();
	*p1 = *p2;
		
	printf("\n");
	//*{
		
	
	
	printf("Segundo, o valor de x: %d\n",x);
	printf("Segundo, o valor de y: %d\n",y);	
	printf("Segundo, o valor de p1: %p\n",p1);
	printf("Segundo, o  valor de p2: %p\n",p2);
	
	printf("Segundo, o conteudo de p1 %d\n ",*p1);
	printf("Segundo, o conteudo de p2 %d\n ",*p2);
	
	printf("\n");
	printf("\n");
	
		
	getch();
	x = 10;
	p1=p2;
	
	printf("Terceiro, o end de memoria de p1: %p\n",&p1);
	printf("Terceiro, o end de memoria de p2: %p\n",&p2);
	
	printf("Terceiro, o valor de x: %d\n",x);
	printf("Terceiro, o valor de y: %d\n",y);	
	//Aqui muda ambos passam a ser 062FE44
	printf("Terceiro, o valor de p1: %p\n",p1);
	printf("Terceiro, o  valor de p2: %p\n",p2);
	//O conteúdo continua o mesmo, 20 para ambos	
	printf("Terceiro, o  O conteudo de p1 %d\n ",*p1);
	printf("Terceiro, o   conteudo de p2 %d\n ",*p2);
	printf("\n");
	printf("\n");
	
	z = *p1;
	*p2 = x;
	
	//Os endereços de memória de x,y,z continuam os mesmos
	//os endereços de memória de p1 e p2 também permanecem os mesmos 

	printf("Quarto, o valor de x: %d\n",x);
	printf("Quarto, o valor de y: %d\n",y);	
	//o valor de z mudou, passou a ser 20
	printf("Quarto, o valor de z: %d\n",z);
	printf("Quarto, o  valor de p1: %p\n",p1);
	printf("Quarto, o  valor de p2: %p\n",p2);
	
	printf("Quarto, o conteudo de p1 %d\n ",*p1);
	printf("Quarto, o conteudo de p2 %d\n ",*p2);
	
	return 0;
}
