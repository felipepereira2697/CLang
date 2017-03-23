#include <stdio.h>
#include <stdlib.h>
#define max 10
//Nomes: Felipe Alberto Pereira e Matheus Rodrigues do Santos
//TIA: 31559026 e 31550576

void merge(int vetor[], int p, int q, int r){
	int n1 = q - p +1;
	int n2 = r - q;
	int i;
	int j;
	int arrayL[n1+1];
	int arrayR[n2+1];
	int k;
	
	
	for(i = 0;i<n1;i++){
		arrayL[i] = vetor[p+i];
	}
	for(j = 0;j<n2;j++){
		arrayR[j] = vetor[q+j+1];
	}
	arrayL[n1] = 9999;
	arrayR[n2] = 9999;
	//pelo vetor do cormen estar indexado em 1 e o nosso em 0.
	i = 0;
	j = 0;
	for(k = p; k <= r ; k++){
		
		if(arrayL[i] <= arrayR[j]){
			vetor[k] = arrayL[i];
			i = i+1;
			
		}else{
			vetor[k] = arrayR[j];
			j = j+1;
		}
	}
	
}

void merge_sort(int vetor[], int p, int r){
	int q;
	if(p < r){
		q = (p+r)/2;
		merge_sort(vetor,p,q);
		merge_sort(vetor,q+1,r);
		merge(vetor,p,q,r);
	}
}

void insertion_sort(int vetor2[]){
	int j;
	int i;
	int key;
	
	for(j=1;j<max;j++){
		
		key = vetor2[j];
		i = j-1;
		
		while(i>=0 && vetor2[i]>key){
			vetor2[i+1] = vetor2[i];
			i = i-1;
		}
		
		vetor2[i+1] = key;
	}
}
int main(){
	int vetor[10] = {9,8,7,6,5,4,3,2,1,0};
	int vetor2[10] = {29,28,37,16,45,514,23,52,61,110};
	int vetorMax = 10;
	int p,r;
	int cont;
	int cont2;
	
	
	merge_sort(vetor,0,vetorMax-1);
	printf("Vetor ordenado pelo Merge Sort!\n");
	for(cont = 0;cont<vetorMax;cont++){
		printf("%d\n",vetor[cont]);
	}
	printf("Vetor ordenado pelo Insertion sort!\n");
	insertion_sort(vetor2);
	for(cont2 = 0;cont2<vetorMax;cont2++){
		printf("%d\n",vetor2[cont2]);
	}
	return 0;		
}




