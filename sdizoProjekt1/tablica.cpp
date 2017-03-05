#include "stdafx.h"
#include "tablica.h"


tablica::tablica()
{
	tab = new int[10];
	length = 0;
}


tablica::~tablica()
{
	delete[] tab;
}

int tablica::size()
{
	return length;
}

void tablica::dodaj_poczatek(int number)
{
	int * temp = new int[length+1];
	temp[0] = number;
	for (int i = 0, int j = 1; i < length; i++, j++)
	{
		temp[j] = tab[i];
	}
	length++;
	delete[] tab;
	tab = temp;
}

void tablica::dodaj_koniec(int number)
{
	int * temp = new int[length+1];
	for(int i = 0; i < length; i++)
	{
		temp[i] = tab[i];
	}
	temp[length] = number;
	length++;
	delete[] tab;
	tab = temp;
}

void tablica::dodaj_pozycja(int number, int position)
{
	int * temp = new int[length+1];
	for (int i = 0, int j = 0;  i < length; i++, j++)
	{
		if (i == position)
		{
			temp[position] = number;
			j++;
		}
		temp[j] = tab[i];
	}
	length++;
	delete[] tab;
	tab = temp;
}

void tablica::usun_poczatek(int number)
{
	usun_pozycja(number, 0);
}

void tablica::usun_koniec(int number)
{
	usun_pozycja(number, length);
}

void tablica::usun_pozycja(int number, int position)
{
	int * temp = new int[length - 1];
	for (int i = 0, int j = 0; i < length; i++, j++)
	{
		if (i == position)
		{
			i++;
		}
		temp[j] = tab[i];
	}
	length--;
	delete[] tab;
	tab = temp;
}

int tablica::operator[](int el) 
{ 
	return tab[el]; 
}
