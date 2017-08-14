/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,aux,fim,inicio=0,total=1;
	char frase[1000];
	

	scanf("%[^\n]", frase);
	fim = strlen(frase);
	
	while(frase[inicio] != '\0'){
		if(frase[inicio] == '0' | frase[inicio] == '1' | frase[inicio] == '2' |
                   frase[inicio] == '3' | frase[inicio] == '4' | frase[inicio] == '5' |
                   frase[inicio] == '6' | frase[inicio] == '7' | frase[inicio] == '8' |
                   frase[inicio] == '9' )
			if(frase[inicio+1] == '.' | frase[inicio+1] == ',' )
				if(frase[inicio+2] == '0' | frase[inicio+2] == '1' |
		                   frase[inicio+2] == '2' | frase[inicio+2] == '3' |	
                                   frase[inicio+2] == '4' | frase[inicio+2] == '5' |
                                   frase[inicio+2] == '6' | frase[inicio+2] == '7' |
                                   frase[inicio+2] == '8' | frase[inicio+2] == '9' ){
					frase[inicio+1] = ' ';
					i = inicio+1;
					while(frase[i] != '\0'){
					frase[i] = frase[i+1];
					i++;
					}
				}
	inicio++;
	}
	
	inicio=0;
	while(frase[inicio] != '\0'){
		switch(frase[inicio]){
			case '.':
				frase[inicio] = ' ';
				break;
			case ',':
				frase[inicio] = ' ';
				break;	
			case ':':
				frase[inicio] = ' ';
				break;	
			case ';':
				frase[inicio] = ' ';
				break;	
			case '"':
				frase[inicio] = ' ';
				break;	
			case '!':
				frase[inicio] = ' ';
				break;	
			case '?':
				frase[inicio] = ' ';
				break;	
			case '(':
				frase[inicio] = ' ';
				break;	
			case ')':
				frase[inicio] = ' ';
				break;	
			case '\'':
				frase[inicio] = ' ';
				break;
			case '-':
				frase[inicio] = ' ';
				break;
		}
		inicio++;
	}

	fim = strlen(frase);
	for(inicio=0; inicio<=fim; inicio++){
		if((frase[inicio] == ' ') && (frase[inicio+1] != '\0') && (frase[inicio+1] != ' '))
			total++;
	}

	printf("%d\n", total);

	return 0;
}		

