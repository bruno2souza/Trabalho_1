-----------------------------------------------------READ ME--------------------------------------------------------------
# Trabalho_1
Trabalho 1 de LPA
Aluno: Bruno Henrique de Souza   n� USP: 9311685    GitHub User Name: bruno2souza


==== INSTRU��ES DE USO DOS PROGRAMAS ====

1) Closest pair:
   
1.1- O programa imprimir� uma mensagem que perguntar� ao usu�rio a quantidade de valores inteiros que ele deseja entrar. 
        Esse n�mero determinar� o tamanho da mem�ria separada dinamicamente para comportar o vetor, ou a lista, de elementos inteiros a ser inserido.

   1.2- Feito isso, o programa pedir� ao usu�rio para entrar com tais valores, deixando claro que ele deve separar os respectivos elementos,
        com a tecla Enter.
   
1.3- Uma vez que a lista foi totalmente entrada, ocorrer� a ordena��o dos elementos da mesma, recursivamente, pelo m�todo bubble sort.
   
1.4- Com a lista agora ordenada, o programa realizar� compara��es entre elementos consecutivos do vetor, a fim de encontrar a menor diferen�a
        entre dois elementos distintos da lista.
   
1.5- Ap�s encontrar a menor diferen�a, o programa far� a sa�da ao usu�rio de quanto � tal diferen�a, e de quais valores � tal diferen�a.
   
1.6- Ao fim de tudo, ocorre a libera��o de mem�ria do vetor usado para guardar a lista.
   
OBS: O programa funciona apenas para uma lista de pelo menos dois elementos. Caso o usu�rio escolha uma lista de tamanho de 1 ou menos elementos,
        o programa ir� emitir uma mensagem falando para ele escolher um tamanho de lista que funcione para o programa.

2) Element uniqueness:
   
2.1- O programa inicia-se perguntando ao usu�rio o tamanho que ter� a lista que ele deseja entrar. Esse valor fornecido pelo usu�rio
        determinar� o espa�o reservado para o vetor que comportar� a lista em quest�o. Deve-se lembrar que o programa funciona apenas para valores inteiros.
   
2.2- Com a mem�ria j� reservada, o programa pede ao usu�rio que ele entre com os valores da lista a ser analisada, deixando claro que � preciso
        separar os elementos pela tecla Enter.
   
2.3- Com a lista fornecida pelo usu�rio, o programa far� a ordena��o desta, atrav�s do m�todo bubble sort, recursivamente.
   
2.4- Uma vez que a lista est� ordenada, o program� iniciar� a busca por elementos �nicos. Para tal, ele compara um dado elemento da lista com seus
        vizinhos (fazendo um caso especial para o primeiro e o �ltimo elementos, para n�o compar�-los com lixo). Caso um dado elemento seja diferente
        de ambos vizinhos, pode-se afirmar que ele � �nico na lista toda, pois esta se encontra ordenada.
   
2.5- A cada elemento �nico encontrado, o programa imitir� uma mensagem falando que tal n�mero � �nico na lista.
   
2.6- Ao final de tudo, o programa libera a mem�ria usada para armazenar a lista em quest�o.
   
OBS: O programa est� preparado para as diferentes situa��es em que ele pode ser posto, tais quais n�o haver nenhum elemento �nico na lista,
        ou a lista ser de apenas um elemento (ou seja, este nao ter vizinhos para ser comparado), ou at� se o usu�rio informar um tamanho 
        de lista menor do que 1.

3) Frequency distribution:
   
3.1- O programa inicia-se pedindo ao usu�rio o tamanho da lista que vai ser posta em quest�o. O valor fornecido � importante para que haja
        a aloca��o din�mica de mem�ria, do tamanho exato da lista a ser avaliada. Mais uma vez, o programa funciona apenas para inteiros.
   
3.2- Feito isso, o programa pede para que o usu�rio entre com os elementos pertencentes a lista, deixando claro que eles devem ser separados
        pela tecla Enter.
   
3.3- O programa reservar� dois vetores de mesmo tamanho (aquele fornecido pelo usu�rio em 3.1), um que comportar� a lista em quest�o, e outro
        para registrar as frequ�ncias em que cada elemento da lista aparece (vamos chamar o vetor da lista de v, e o vetor das frequ�ncias de f).
   
3.4- Come�ando do primeiro elemento de v, o programa o deixar� como modelo, e ent�o realizar� uma busca por toda a lista, e a cada vez que 
        encontrar um elemento igual ao modelo, um contador ir� ser acrescentado em +1. Ao final da lista, o valor registrado pelo contador mostrar�
        a frequ�ncia que o elemento modelo aparece no vetor. Tal valor ser� registrado na mesma posi��o que o modelo tem em v, no vetor f
        (por exemplo, se o primeiro elemento de v aparece 9 vezes na lista toda, a primeira posi��o de f guardar� o valor "9").
   
3.5- Uma vez que o mesmo processo foi com todos os termos de v, teremos um vetor f que mostrar� a distribui��o de frequ�ncia de cada elemento em v.
        Neste momento, o programa procurar� em f o maior valor, ou seja, qual � a posi��o do elemento de maior frequ�ncia de v.
   
3.6- Uma vez encontrado, o programa imitir� uma sa�da informando qual � o elemento da lista de maior frequ�ncia, e quanto � tal frequ�ncia.
   
3.7- Por fim, o programa libera a mem�ria usada para alocar v e f.
   
OBS: O programa foi feito para responder a casos onde todos os elementos aparecem uma �nica vez, e caso o usu�rio forne�a um tamanho de lista 
        incompat�vel com o prop�sito do programa. Ademais, caso hajam dois elementos de mesma frequ�ncia, o programa informar� apenas aquele que primeiro
        aparece na lista.


==== INFORMA��ES B�SICAS DOS PROGRAMAS ====

Os c�digos fonte dos programas foram compilados em C (.c), no ambiente de desenvolvimento Dev-C++, vers�o 5.10.0.0;

O compilador dos execut�veis (.exe) foi TDM-GCC 4.8.1 64-bit Release;

Os par�metros de compila��o s�o os padr�es do ambiente;

As plataformas de compila��o da vers�o bin�ria foram MinGW64\bin e MinGW54\x86_64-w64-mingw32\bin;

As bibliotecas utilizadas em todos os programas foram stdio.h e stdlib.h;

No reposit�rio encontra-se uma pasta chamada "Entradas-exemplo". Nela est�o escritas, em formato .txt, exemplos de entradas para serem testadas
pelos programas;

Os c�digos fonte e seus execut�veis se encontram no reposit�rio desse trabalho;

Para a compila��o, os programas devem ser compilados da maneira padr�o do ambiente Dev-C++. Para tal, basta ir ao menu Executar, e clicar em Compilar. 
Outros ambientes podem se dar por meios diferentes, como a tecla "Build", ou outros. Contudo, o princ�pio da compila��o � o mesmo.
Uma vez compilado, o programa est� pronto para ser executado.