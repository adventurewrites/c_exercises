#include <stdio.h>

#define LOSOWANIE 49;

//function declarations
void losuj(int ilosc_liczb);


//main program
int main()
{
	losuj(6);
	return 0;
}

void losuj(int ilosc_liczb)
{
	int tab[ilosc_liczb];
	int i;
	printf("Wynik losowania: ");
	for (i=0;i<ilosc_liczb;i++)
	{
		tab[i] = rand() % LOSOWANIE + 1;
		printf("%d",tab[i]);
		if (i<ilosc_liczb-1)
		  printf(", ");
	}
	printf("\nKoniec losowania\n");
}

