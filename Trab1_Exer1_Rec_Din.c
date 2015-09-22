#include<stdio.h>
#include<stdlib.h>
void bolha (int n, int* v);    //protótipo da função bolha
void main (){
	int i, a, b, menor, n, j, *v;
	printf("Digite a quantidade de inteiros que voce vai entrar: ");  //o programa pergunta ao o usuario o numero de inteiros que entrará no vetor
	scanf("%d", &n);
	printf("Entre com os inteiros, separando eles pela tecla Enter:\n");   //entao ele pede para que o usuario entre com tais ineiros
	v=(int *) malloc(n*sizeof(int));   //por alocação dinamica, o espaço separado para o vetor é corresponde ao numero de inteiros que o usuario afirmou que entraria
	for(j=0; j<n; j++){    //ocorre a alocação dos elementos no vetor
		scanf("%d", &v[j]);
	}
	bolha (n, v);     //chamada da função bolha para ordenar o vetor, passando o tamanho do vetor e o endereço do primeiro elemento como ponteiro
	a=v[0];       //chamar o primeiro elemento de a, e o segundo de b
	b=v[1];
	menor=(v[1]-v[0]);   //começo dizendo que a menor diferença é a diferença entre o premeiro e o segundo elementos
	for(i=1;i<n-1;i++){    //começa o for em i=1, para que o loop comece na comparação do segundo e terceiro termos
		if((v[i+1]-v[i]) < menor){   //se a nova diferença for menor que a anterior, esse nova diferença sera o novo "menor"
			menor=(v[i+1]-v[i]);    
			a=v[i];                 //é preciso se comparar apenas um elemento com o seu vizinho seguinte, pois a comparação com qualquer outro numa lista 
			b=v[i+1];               //ordenada será maior, e portanto não nos interessa
		    }
	    }    //no fim de tudo isso, menor será de fato a menor diferença de todos os pares possiveis
    printf("a menor diferenca eh %d, entre os numeros %d e %d\n", menor, a, b);
    free(v);    //após o programa ter feito o que devia, ocorre a liberação da memória
}

void bolha(int n, int* v){     
	int i, tmp;
	int troca = 0;      //função bolha, onde o sistema de parada é dado pela variavel troca.
	for(i=0;i<n-1;i++){
		if(v[i]>v[i+1]){    
			tmp=v[i];
			v[i]=v[i+1];
			v[i+1]=tmp;
			troca=1;       // se acontecer alguma troca no processo, o valor de "troca" se torna 1, basicamente para ser diferente de 0
		}
	}
	if(troca!=0){        //se o valor de "troca" for diferente de 0, a função é chamada novamente, recursivamente, onde o tamanho do novo vetor 
		bolha(n-1, v);   //é n-1, pois o ultimo elemento já esta ordenado
	}
}
