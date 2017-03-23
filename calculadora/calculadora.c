//Nome: Felipe Alberto Pereira TIA: 31559026
//Nome: Matheus Rodrigues do Santos TIA: 31550576
#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1;
	char op;
	int n2;
	//inverter a ordem pois se colocar os números primeiros ele pula, graças ao buffer, logo podemos limpar o buffer
	//usando fflush(stdin) 
	fflush(stdin);
	printf("Digite o simbolo da operacao desejada: ");
	scanf("%c", &op);
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	
	switch(op){
		case '+':
			 soma(n1,n2);
		break;
		case '-':
			 subtrai(n1,n2);
		break;
		case '*':
			 multiplica(n1,n2);
		break;
		case '/':
			 divisao(n1,n2);
		break;
		
		default:
		printf("Operacao invalida");			
	}
		
	
	return 0;
}

int soma(int n1, int n2){
	printf("%i",n1+n2);
}
int subtrai(int n1, int n2){
	printf("%i",n1-n2);
}
int multiplica(int n1, int n2){
	printf("%i",n1*n2);
}
int divisao(int n1, int n2){
	float parserFloat1;
	float parserFloat2;
	parserFloat1 = (float)n1;
	parserFloat2 = (float)n2;
	if(n2==0){
		printf("Nao e possivel dividir por zero");
	}else{
		//limitando as casas decimais aqui
		printf("%.2f",parserFloat1/parserFloat2);
	}
}
