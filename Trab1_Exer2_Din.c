#include<stdio.h>
#include<stdlib.h>
void bolha(int n, int*v);  //protótipo da função para ordenação
void main(){  
	int n, *v, m, i, cond=0;
	printf("diga o numero de inteiros que voce vai entrar nesta lista: ");  //o programa pergunta ao usuario a quantidade de elementos que tera no vetor 
	scanf("%d", &n);
	if(n<1){
		printf("Por favor, escolha um número de inteiros maior ou igual a 1, para que o programa funcione:\n");
		scanf("%d", &n);
	}
	v=(int *) malloc(n*sizeof(int));  //depois que o usuario informa o tamanho do vetor, o programa separa, dinamicamente, um espaço para este.
	printf("entre com os inteiros da lista, separando-os pela tecla enter:\n");  
	for(m=0;m<n;m++){       //aqui haverá a colocação de cada elemento dado pelo usuario no vetor
		scanf("%d", &v[m]);
	}
	bolha (n, v);    //ocorre a chamada da função bolha para a ordenação do vetor. Uma vez ordenado, a procura pelo elemento unico se torna mais facil
	if(v[0]!=v[1]){   //aqui estuda-se o caso do primeiro elemento do vetor. Só é preciso compará-lo com o elemento seguinte para se verificar se é elemento unico ou nao
		printf("este numero eh elemento unico: %d\n", v[0]); //caso o primeiro elemento seja diferente do segundo, ele será diferente de qualquer outro elemento do vetor, e portanto, unico.
		cond=1;  //a variavel "cond" (condição), que foi inicializada com o valor 0, passa a ter valor 1 caso averigue-se a presença de um elemento unico. A razao disso é explicada adiante.
	}
	for(i=1;i<=n-2;i++){  //para o meio do vetor, a procura de um elemento unico pode ser dada por um loop "for".
		if((v[i]!=v[i-1]) && (v[i]!=v[i+1])){   //se um dado elemento for diferente dos seus vizinhos, entao ele com certeza sera diferente de qualquer outro elemento da lista ordenada.
			printf("este numero eh elemento unico: %d\n", v[i]); //por conta disso, podemos dizer que este é elemento unico
			cond=1;  //mais uma vez, caso ocorra averiguação de elemento unico, "cond" passa a ter valor 1
		}
	}
	if(v[n-1]!=v[n-2]){ //o ultimo caso é para o ultimo elemento. Analogamente ao estudo do primeiro elemento da lista, se o ultimo for diferente de seu antecessor, ele é unico
		printf("este numero eh elemento unico: %d\n", v[n-1]); 
		cond=1; //Caso ocorra averiguação de unicidade, "cond" recebe o valor 1
	}
	if(cond==0){ //se "cond" acabar o programa com valor 0, como foi atribuido a ele inicialmente, isso significará dizer que nao foi encontrado elemento unico em lugar nenhum
		printf("Nao ha elementos unicos! Vlw Flw\n"); //por isso podemos dizer ao usuario que não há elementos unicos na lista por ele fornecida
	}
	printf("Esta eh a lista ordenada: ");
	for(m=0;m<n;m++){
		printf("%d ", v[m]);
	}
	free(v);  //no fim de tudo, ocorre a liberação de memória do vetor v.
}
void bolha(int n, int *v){  //a função bolha recebe como parametros o tamanho n da lista, e o endereço do primeiro elemento da lista
	int i, tmp;
	int troca = 0;  //coloca-se uma variavel para controlar a parada da ordenação
	for(i=0;i<n-1;i++){  
		if(v[i]>v[i+1]){  //caso um dado elemento for maior que o seu sucessor, corre a inversão
			tmp=v[i];
			v[i]=v[i+1];
			v[i+1]=tmp;
			troca=1;   //caso ocorra pelo menos uma inversão ao longo da lista, o valor da variavel "troca" é transformado para um
		}
	}
	if(troca!=0){  //caso o valor da variavel "troca" nao seja mais 0, quer dizer que houve uma troca na lista, e que talvez hajam mais trocas necessarias.
		bolha(n-1, v);  //por isso, a função é chamada novamente, recursivamente, onde o tamanho da nova lista é n-1, pois o maior elemento com certeza estará em seu lugar, a saber, o ultimo.
	}
}
