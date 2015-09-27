-----------------------------------------------------READ ME--------------------------------------------------------------
# Trabalho_1
Trabalho 1 de LPA
Aluno: Bruno Henrique de Souza   nº USP: 9311685    GitHub User Name: bruno2souza


==== INSTRUÇÔES DE USO DOS PROGRAMAS ====

1) Closest pair:
   
1.1- O programa imprimirá uma mensagem que perguntará ao usuário a quantidade de valores inteiros que ele deseja entrar. 
        Esse número determinará o tamanho da memória separada dinamicamente para comportar o vetor, ou a lista, de elementos inteiros a ser inserido.

   1.2- Feito isso, o programa pedirá ao usuário para entrar com tais valores, deixando claro que ele deve separar os respectivos elementos,
        com a tecla Enter.
   
1.3- Uma vez que a lista foi totalmente entrada, ocorrerá a ordenação dos elementos da mesma, recursivamente, pelo método bubble sort.
   
1.4- Com a lista agora ordenada, o programa realizará comparações entre elementos consecutivos do vetor, a fim de encontrar a menor diferença
        entre dois elementos distintos da lista.
   
1.5- Após encontrar a menor diferença, o programa fará a saída ao usuário de quanto é tal diferença, e de quais valores é tal diferença.
   
1.6- Ao fim de tudo, ocorre a liberação de memória do vetor usado para guardar a lista.
   
OBS: O programa funciona apenas para uma lista de pelo menos dois elementos. Caso o usuário escolha uma lista de tamanho de 1 ou menos elementos,
        o programa irá emitir uma mensagem falando para ele escolher um tamanho de lista que funcione para o programa.

2) Element uniqueness:
   
2.1- O programa inicia-se perguntando ao usuário o tamanho que terá a lista que ele deseja entrar. Esse valor fornecido pelo usuário
        determinará o espaço reservado para o vetor que comportará a lista em questão. Deve-se lembrar que o programa funciona apenas para valores inteiros.
   
2.2- Com a memória já reservada, o programa pede ao usuário que ele entre com os valores da lista a ser analisada, deixando claro que é preciso
        separar os elementos pela tecla Enter.
   
2.3- Com a lista fornecida pelo usuário, o programa fará a ordenação desta, através do método bubble sort, recursivamente.
   
2.4- Uma vez que a lista está ordenada, o programá iniciará a busca por elementos únicos. Para tal, ele compara um dado elemento da lista com seus
        vizinhos (fazendo um caso especial para o primeiro e o último elementos, para não compará-los com lixo). Caso um dado elemento seja diferente
        de ambos vizinhos, pode-se afirmar que ele é único na lista toda, pois esta se encontra ordenada.
   
2.5- A cada elemento único encontrado, o programa imitirá uma mensagem falando que tal número é único na lista.
   
2.6- Ao final de tudo, o programa libera a memória usada para armazenar a lista em questão.
   
OBS: O programa está preparado para as diferentes situações em que ele pode ser posto, tais quais não haver nenhum elemento único na lista,
        ou a lista ser de apenas um elemento (ou seja, este nao ter vizinhos para ser comparado), ou até se o usuário informar um tamanho 
        de lista menor do que 1.

3) Frequency distribution:
   
3.1- O programa inicia-se pedindo ao usuário o tamanho da lista que vai ser posta em questão. O valor fornecido é importante para que haja
        a alocação dinâmica de memória, do tamanho exato da lista a ser avaliada. Mais uma vez, o programa funciona apenas para inteiros.
   
3.2- Feito isso, o programa pede para que o usuário entre com os elementos pertencentes a lista, deixando claro que eles devem ser separados
        pela tecla Enter.
   
3.3- O programa reservará dois vetores de mesmo tamanho (aquele fornecido pelo usuário em 3.1), um que comportará a lista em questão, e outro
        para registrar as frequências em que cada elemento da lista aparece (vamos chamar o vetor da lista de v, e o vetor das frequências de f).
   
3.4- Começando do primeiro elemento de v, o programa o deixará como modelo, e então realizará uma busca por toda a lista, e a cada vez que 
        encontrar um elemento igual ao modelo, um contador irá ser acrescentado em +1. Ao final da lista, o valor registrado pelo contador mostrará
        a frequência que o elemento modelo aparece no vetor. Tal valor será registrado na mesma posição que o modelo tem em v, no vetor f
        (por exemplo, se o primeiro elemento de v aparece 9 vezes na lista toda, a primeira posição de f guardará o valor "9").
   
3.5- Uma vez que o mesmo processo foi com todos os termos de v, teremos um vetor f que mostrará a distribuição de frequência de cada elemento em v.
        Neste momento, o programa procurará em f o maior valor, ou seja, qual é a posição do elemento de maior frequência de v.
   
3.6- Uma vez encontrado, o programa imitirá uma saída informando qual é o elemento da lista de maior frequência, e quanto é tal frequência.
   
3.7- Por fim, o programa libera a memória usada para alocar v e f.
   
OBS: O programa foi feito para responder a casos onde todos os elementos aparecem uma única vez, e caso o usuário forneça um tamanho de lista 
        incompatível com o propósito do programa. Ademais, caso hajam dois elementos de mesma frequência, o programa informará apenas aquele que primeiro
        aparece na lista.


==== INFORMAÇÕES BÁSICAS DOS PROGRAMAS ====

Os códigos fonte dos programas foram compilados em C (.c), no ambiente de desenvolvimento Dev-C++, versão 5.10.0.0;

O compilador dos executáveis (.exe) foi TDM-GCC 4.8.1 64-bit Release;

Os parâmetros de compilação são os padrões do ambiente;

As plataformas de compilação da versão binária foram MinGW64\bin e MinGW54\x86_64-w64-mingw32\bin;

As bibliotecas utilizadas em todos os programas foram stdio.h e stdlib.h;

No repositório encontra-se uma pasta chamada "Entradas-exemplo". Nela estão escritas, em formato .txt, exemplos de entradas para serem testadas
pelos programas;

Os códigos fonte e seus executáveis se encontram no repositório desse trabalho;

Para a compilação, os programas devem ser compilados da maneira padrão do ambiente Dev-C++. Para tal, basta ir ao menu Executar, e clicar em Compilar. 
Outros ambientes podem se dar por meios diferentes, como a tecla "Build", ou outros. Contudo, o princípio da compilação é o mesmo.
Uma vez compilado, o programa está pronto para ser executado.