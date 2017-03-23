#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	//Nomes: Felipe Alberto Pereira e Matheus Rodrigues do Santos
	//TIA: 31559026 e 31550576
	
	
	
  	//Passo I: Definir uma estrutura para armazenar o nome, código e preço do produto
  	//criando a estrutura que armazenará as caracteristicas do produto
  	struct produto{
  		int codigo;
    	char nome[50];
    	float preco;  
  	};
  	//criando a estrutura que armazenará as caracteristicas da compra
  	struct compra{
  		int quantidade;
  		struct produto produto;
	};
  	
  	void verificaQuantidade(struct compra lista_compras[5]);
  	void receberProdutos(struct produto lista_produtos[5]);
  	void ordenaProdutoPorCodigo(struct produto lista_produtos[5]);
  	float calculaTotal(struct compra lista_compras[5]);
  	
	int main(){
		int k;
		struct produto lista_produtos[5];
		struct compra lista_compras[5];
		receberProdutos(lista_produtos);
		
		//vamos printar essa lista de produtos que serão vendidos
		
		for(k = 0;k<5;k++){
			printf("Codigo do produto: %d\n",lista_produtos[k].codigo);
			printf("Nome do produto: %s\n", lista_produtos[k].nome);
			printf("Preco do produto: %f\n",lista_produtos[k].preco);
		
		}
		ordenaProdutoPorCodigo(lista_produtos);
		printf("++++++LISTA DE PRODUTOS ORDENADA PELO CODIGO++++++++");
		printf("\n");
		for(k = 0;k<5;k++){
			printf("Codigo do produto: %d\n",lista_produtos[k].codigo);
			printf("Nome do produto: %s\n", lista_produtos[k].nome);
			printf("Preco do produto: %f\n",lista_produtos[k].preco);
		}
		
		//parte fundamental que fará nossa lista de compras receber o produto para que depois realize o calculo da lista_compras 
		for(k = 0; k < 5; k++){
			lista_compras[k].produto = lista_produtos[k];
			//garantindo zero de estoque
			lista_compras[k].quantidade = 0;
		}
		printf("\n");
		//Aqui será a lista de compras
		printf("===========LISTA DE COMPRAS==========");
		printf("\n");
		for(k = 0;k<5;k++){
			printf("Digite o codigo do produto desejado:\n ");
			scanf("%d",&lista_compras[k].produto.codigo);
			printf("Digite a quantidade do produto:\n ");
			verificaQuantidade(lista_compras);
			scanf("%d",&lista_compras[k].quantidade);
		}		
		//comprar 1 de cada produto,cada produto custando 10, resultado deve ser 50
		//comprar 2 de cada produto, cada produto custando 20, resultado deve ser 100
		printf("\n\nTotal da compra R$: %0.2f", calculaTotal(lista_compras));
		
	  return 0;
	}
   	
   	//Passo II: criar uma função e guardar dentro de um vetor os produtos digitados pelo usuário
  	void receberProdutos(struct produto lista_produtos[5]){
  		int i;
  		for(i = 0;i<5;i++){
  			printf("Digite o codigo do produto:\n");
  			scanf("%d",&lista_produtos[i].codigo);
  			printf("Digite o nome do produto:\n ");
  			scanf("%s",&lista_produtos[i].nome);
  			printf("Digite o preco do produto:\n ");
  			scanf("%f",&lista_produtos[i].preco);
		}
  	}
  	void verificaQuantidade(struct compra lista_compras[5]){
  		int i;
  		for(i = 0;i<5;i++){
  			if(lista_compras[i].quantidade >=3){
  				break;
			  }
		  }
	  }
  	//Passo III: ordenar os produtos pelo código de cada um, usando o bubble sort pela estrutura ter um tamanho relativamente pequeno
	void ordenaProdutoPorCodigo(struct produto lista_produtos[5]){
  		int i,j;
  		struct produto auxiliar;
  		for(i = 0;i<5;i++){
  			for(j  = 0;j<5;j++){
  				if(lista_produtos[i].codigo < lista_produtos[j].codigo){
  					//realiza a troca aqui
  					auxiliar = lista_produtos[i];
  					lista_produtos[i]  = lista_produtos[j];
  					lista_produtos[j] = auxiliar;
				  }
			  }		
		}
  	}
  	//Passo IV: Calcular o total da lista
  	float calculaTotal(struct compra lista_compras[]){
  		int i;
  		float total;
  		for(i = 0;i<5;i++){
  			total += (lista_compras[i].produto.preco) * (lista_compras[i].quantidade);
		  }
		  //retorna o valor total da lista, que vai ser um float.
		  return total;
	}

  


