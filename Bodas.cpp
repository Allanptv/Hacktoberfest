#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (void) {
	setlocale(LC_ALL,"");
	
	int anoc, anoa, bodas;
		printf("Digite o ano do seu casamento:");
		scanf("%d", &anoc);
	
		printf("Digite o ano atual: ");
		scanf("%d", &anoa);
		
		bodas = anoa - anoc;	
		
		if(anoa < anoc && anoa < 0)
			printf("O ano � invalido!");
		else
			if(bodas == 25)
				printf("A bodas correspondente a %.1d anos � de Prata! \n", bodas);
			else
				if(bodas == 50)
					printf("A bodas correspondente a %.1d anos � de Ouro! \n", bodas);
				else
					if(bodas == 60)
						printf("A bodas correspondente a %.1d anos � de Diamante! \n", bodas);
					else
						if(bodas == 75)
							printf("A bodas correspondente a %.1d anos � de Brilhantes! \n", bodas);
						else
							printf("Voc� tem %.1d anos de casamento. Parab�ns!! \n", bodas);
						
	getch();
	//system("PAUSE");
	return 0;
}
