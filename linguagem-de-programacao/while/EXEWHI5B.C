/* Exemplo 5B de uso da estrutura de repeti��o while

   Fun��o _beep(frequencia,duracao em milissegundos)
           biblioteca stdlib.h  neste compilador

   Fun��o  Beep(frequencia,duracao em milissegundos)
           biblioteca windows.h neste compilador

   Nesta vers�o � usado cls para limpar a tela, e imprimir a frequencia
   em uma linha apenas.

   Repare como o programa ficou bem mais lento!
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigo = 0;

	while(codigo < 100){
	    system("cls");
	    printf("Frequencia: %d",codigo);
	    _beep(codigo,100);
		codigo++;
	}

    return 0;
}
