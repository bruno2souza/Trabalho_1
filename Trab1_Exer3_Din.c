#include<stdio.h>
#include<stdlib.h>
int freq(int n, int j, int* v);  //prot�tipo da fun��o freq
void main(){
	int n, i, j, *v, *f, count, maior_v, maior_f;
	printf("Diga o numero de inteiros que voce vai entrar: "); //o programa pede ao usu�rio que diga qual ser� o n�mero de elementos do vetor 
	scanf("%d", &n);
	if(n<1){
		printf("Por favor, escolha um tamanho de lista maior ou igual a 1, para que o programa funcione:\n");
		scanf("%d", &n);
	}
	printf("entre com os inteiros, separando-os pela tecla Enter: \n");  //Pede ent�o para que o usu�rio entre com os elementos da lista
	v=(int *) malloc(n*sizeof(int));  //ocorre reserva de espa�o para dois vetores, um que comportar� os elementos da lista, e outro que comportar�
	f=(int *) malloc(n*sizeof(int));  //as frequ�ncias de cada elemento
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for(j=0; j<n; j++){   //Para o preenchimento do vetor das frequ�ncias f, ocorrer� a chamada da fun��o freq para cada posi��o
		f[j]=freq(n, j, v);
	}
	maior_v=v[0];   //estipula-se inicialmente que a maior frequ�ncia pertence ao primeiro elemento do vetor v
	maior_f=f[0];
	for(i=0; i<n; i++){  //Aqui ocorre a procura por uma frequ�ncia que seja maior do que aquela estipulada inicialmente
		if(f[i]>maior_f){  //caso seja encontrado uma frequ�ncia maior, a vari�vel maior_f passa a comportar tal frequ�ncia
			maior_f=f[i];
			maior_v=v[i];
		}
	}
	if(maior_f==1){   //se no final do programa, a vari�vel maior_f possuir o valor 1, significar� que todas as frequ�ncias registradas no vetor f s�o iguais a 1
		printf("todos os elementos aparecem uma unica vez");  //Em outras palavras, cada elemento ocorre apenas uma vez.
    }else{
	printf("a maior frequencia eh %d, do elemento %d", maior_f, maior_v);  //por�m, caso maior_f tenha um valor diferente, este valor apontar� pro elemento de maior frequ�ncia
    }         //e isso ser� imprimido ao usu�rio
    free(v);   //ao final, ocorre libera��o de mem�ria de v e f.
    free(f);
}

int freq(int n, int j, int *v){   //fun��o freq para se determinar a frequ�ncia de cada elemento de v
	int k;
	int count=0;   //inicia-se um contador com o valor 0
	for(k=0;k<n;k++){   //come�a-se ent�o a percorrer o vetor v, em busca de elemtos iguais ao longo de toda a lista
		if(v[j]==v[k]){   //cada vez que um elemento for igual a um elemento temporariamente escolhido,
			count++;    //o contador aumentar� no valor de 1.
		}
	}
	return count;   //ao final, o valor que o contador possuir ser� equivalente � frequ�ncia do elemento temporariamente escolhido na lista v. Tal valor � retornado � fun��o main.
}
