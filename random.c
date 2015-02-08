#include <stdio.h>
#include <stdlib.h>

#define LOSOWANIE 49
#define ILOSC_LICZB 6

//function declarations
void losuj(int ilosc_liczb);
int * wylosowano(int ilosc_liczb);


//main program
int main()
{
//	losuj(6);
	int *tab;
	tab = wylosowano(ILOSC_LICZB);
	int i;
	for (i=0;i<ILOSC_LICZB;i++)
	{
		printf("%d ",tab[i]);
	}
	printf("\nKoniec losowania\n");
	free(tab);
	return 0;
}

int * wylosowano(int ilosc_liczb)
{
	int* tab = (int*) malloc(sizeof(*tab) * ilosc_liczb);
	int i;
	for (i=0;i<ilosc_liczb;i++)
		{
			tab[i] = rand() % LOSOWANIE + 1;
		}
	return tab;	
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

