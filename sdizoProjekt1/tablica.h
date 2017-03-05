#pragma once
class tablica
{
	int * tab;
	int length;
public:
	tablica();
	~tablica();

	int size();
	void dodaj_poczatek(int number);
	void dodaj_koniec(int number);
	void dodaj_pozycja(int number, int position);
	void usun_poczatek(int number);
	void usun_koniec(int number);
	void usun_pozycja(int number, int position);
	int operator[](int el);
};

