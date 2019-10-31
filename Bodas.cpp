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
			printf("O ano é invalido!");
		else
			if(bodas == 25)
				printf("A bodas correspondente a %.1d anos é de Prata! \n", bodas);
			else
				if(bodas == 50)
					printf("A bodas correspondente a %.1d anos é de Ouro! \n", bodas);
				else
					if(bodas == 60)
						printf("A bodas correspondente a %.1d anos é de Diamante! \n", bodas);
					else
						if(bodas == 75)
							printf("A bodas correspondente a %.1d anos é de Brilhantes! \n", bodas);
						else
							printf("Você tem %.1d anos de casamento. Parabéns!! \n", bodas);
						
	getch();
	//system("PAUSE");
	return 0;
}
