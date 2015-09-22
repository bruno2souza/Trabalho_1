#include<stdio.h>
#include<stdlib.h>
int freq(int n, int j, int* v);
void main(){
	int n, i, j, *v, *f, count, maior_v, maior_f;
	printf("Diga o numero de inteiros que voce vai entrar: "); 
	scanf("%d", &n);
	if(n<1){
		printf("Por favor, escolha um tamanho de lista maior ou igual a 1, para que o programa funcione:\n");
		scanf("%d", &n);
	}
	printf("entre com os inteiros: \n");
	v=(int *) malloc(n*sizeof(int));
	f=(int *) malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for(j=0; j<n; j++){
		f[j]=freq(n, j, v);
	}
	maior_v=v[0];
	maior_f=f[0];
	for(i=0; i<n; i++){
		if(f[i]>maior_f){
			maior_f=f[i];
			maior_v=v[i];
		}
	}
	if(maior_f==1){
		printf("todos os elementos aparecem uma unica vez");
    }else{
	printf("a maior frequencia eh %d, do elemento %d", maior_f, maior_v);
    }
    free(v);
    free(f);
}

int freq(int n, int j, int *v){
	int k;
	int count=0;
	for(k=0;k<n;k++){
		if(v[j]==v[k]){
			count++;
		}
	}
	return count;
}
