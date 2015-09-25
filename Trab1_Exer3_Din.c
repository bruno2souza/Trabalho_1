#include<stdio.h>
#include<stdlib.h>
int freq(int n, int j, int* v);  //protótipo da função freq
void main(){
	int n, i, j, *v, *f, count, maior_v, maior_f;
	printf("Diga o numero de inteiros que voce vai entrar: "); //o programa pede ao usuário que diga qual será o número de elementos do vetor 
	scanf("%d", &n);
	if(n<1){
		printf("Por favor, escolha um tamanho de lista maior ou igual a 1, para que o programa funcione:\n");
		scanf("%d", &n);
	}
	printf("entre com os inteiros, separando-os pela tecla Enter: \n");  //Pede então para que o usuário entre com os elementos da lista
	v=(int *) malloc(n*sizeof(int));  //ocorre reserva de espaço para dois vetores, um que comportará os elementos da lista, e outro que comportará
	f=(int *) malloc(n*sizeof(int));  //as frequências de cada elemento
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for(j=0; j<n; j++){   //Para o preenchimento do vetor das frequências f, ocorrerá a chamada da função freq para cada posição
		f[j]=freq(n, j, v);
	}
	maior_v=v[0];   //estipula-se inicialmente que a maior frequência pertence ao primeiro elemento do vetor v
	maior_f=f[0];
	for(i=0; i<n; i++){  //Aqui ocorre a procura por uma frequência que seja maior do que aquela estipulada inicialmente
		if(f[i]>maior_f){  //caso seja encontrado uma frequência maior, a variável maior_f passa a comportar tal frequência
			maior_f=f[i];
			maior_v=v[i];
		}
	}
	if(maior_f==1){   //se no final do programa, a variável maior_f possuir o valor 1, significará que todas as frequências registradas no vetor f são iguais a 1
		printf("todos os elementos aparecem uma unica vez");  //Em outras palavras, cada elemento ocorre apenas uma vez.
    }else{
	printf("a maior frequencia eh %d, do elemento %d", maior_f, maior_v);  //porém, caso maior_f tenha um valor diferente, este valor apontará pro elemento de maior frequência
    }         //e isso será imprimido ao usuário
    free(v);   //ao final, ocorre liberação de memória de v e f.
    free(f);
}

int freq(int n, int j, int *v){   //função freq para se determinar a frequência de cada elemento de v
	int k;
	int count=0;   //inicia-se um contador com o valor 0
	for(k=0;k<n;k++){   //começa-se então a percorrer o vetor v, em busca de elemtos iguais ao longo de toda a lista
		if(v[j]==v[k]){   //cada vez que um elemento for igual a um elemento temporariamente escolhido,
			count++;    //o contador aumentará no valor de 1.
		}
	}
	return count;   //ao final, o valor que o contador possuir será equivalente à frequência do elemento temporariamente escolhido na lista v. Tal valor é retornado à função main.
}
