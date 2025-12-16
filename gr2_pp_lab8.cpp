// gr2_pp_lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//zadanie 4
float sredniaArytmetyczna(float *tab[], int rozmiar) {
	float srednia = 0;
	float* wsk = tab[0];
	for (int i = 0; i < rozmiar; i++) {
		srednia += *wsk;
		wsk++;
	}
	srednia /= rozmiar;
	return srednia;
}

//zadanie 5

float suma(float* t1[], float* t2[]) {
	float* ws1 = t1[0];
	float* ws2 = t2[0];

	float suma = 0;

	for (int i = 0; i < 10; i++) {
		suma += *ws1 + *ws2;

		cout << "Suma dla indeks: " << i << " = " << *ws1+*ws2 << endl;

		ws1++;
		ws2++;
	}

	return suma;
}

float iloczyn(float* t1[], float* t2[]) {
	float* ws1 = t1[0];
	float* ws2 = t2[0];

	float iloczyn = 1;

	for (int i = 0; i < 10; i++) {
		iloczyn *= *ws1 * *ws2;

		cout << "Iloczyn dla indeks: " << i << " = " << *ws1**ws2 << endl;

		ws1++;
		ws2++;
	}

	return iloczyn;
}

float roznica(float* tab[]) {
	float* wsk = tab[0];
	float max = *wsk;
	float min = *wsk;

	for (int i = 0; i < 10; i++) {
		if (max < *wsk) {
			max = *wsk;
		}
		if (min > *wsk) {
			min = *wsk;
		}
		wsk++;
	}

	return max - min;
}

int main()
{
	/*zadanie 2.1 
	const int size = 3;
	int tab[size] = { 3,5,2 };
	int* ptr[size];
	ptr[0] = &tab[0];
	ptr[1] = &tab[1];
	ptr[2] = &tab[2];

	cout << "Pierwszy element tablicy[0]: " << *ptr[0] << endl;
	cout << "Drugi element tablicy[1]: " << *ptr[1] << endl;
	cout << "Trzeci element tablicy[2]: " << *ptr[2] << endl;*/

	/*zadanie 2.2 
	const int size = 3;
	int tab[size] = { 3,5,2 };
	int* ptr[size];
	ptr[0] = &tab[0];
	ptr[1] = &tab[1];
	ptr[2] = &tab[2];

	int* p;
	p = &tab[0];

	for (int i = 0; i < 3; i++) {
		cout << "Adres: " << p << " Wartosc: " << *p << endl;
		p++;
	}*/

	/*zadanie 2.3 
	int a = 10, b = 20;

	cout << "Przed swapem: a: " << a << " b: " << b << endl;

	swap(&a, &b);

	cout << "Po swapie: a: " << a << " b: " << b << endl;*/

	/*zadanie 1 
	int zm;
	int* wsk;
	wsk = &zm;

	cout << "Podaj liczbe: ";
	cin >> *wsk;
	cout << "zm: " << zm << " *wsk: "<< *wsk << endl;*/

	/*zadanie 2 
	int jakas_tablica[10] = { 2,1,4,3,6,5,8,7,10,9 };
	int* wsk;
	wsk = jakas_tablica;
	wsk = &jakas_tablica[0];



	for (int i = 0; i < 10; i++) {
		cout << "jakas_tablica[" << i << "]: " << *wsk << endl;
		wsk++;
		//(*wsk)++;
	}

	wsk = &jakas_tablica[7];
	*wsk = 77;
	wsk = &jakas_tablica[0];

	cout << endl << endl;

	for (int i = 0; i < 10; i++) {
		cout << "jakas_tablica[" << i << "]: " << *wsk << endl;
		wsk++;
		//(*wsk)++;
	}*/

	/*zadanie 2.1 
	int tablica[10] = { 0 };
	int* wsk = &tablica[0];

	for (int i = 0; i < 10; i++) {
		cout << *wsk << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		*wsk = 9;
		cout << *wsk << endl;
		wsk++;
	}*/

	/*zadanie 3 
	int liczba;
	cout << "Podaj rozmiar tablicy jednowymiarowej: ";
	cin >> liczba;
	float* tablica = new float[liczba]();

	for (int i = 0; i < liczba; i++) {
		tablica[i] = i;
	}

	float* wsk = &tablica[liczba - 1];

	while (1) {
		cout << *wsk-- << endl;

		if (*wsk == 0) {
			break;
		}
	}*/

	/*zadanie 4 
	srand(time(0));
	float* tablica = new float[10]();

	for (int i = 0; i < 10; i++) {
		tablica[i] = rand()%10+1;
		cout << tablica[i] << endl;
	}

	cout << "Srednia arytmetyczna: " << sredniaArytmetyczna(&tablica, 10) << endl;*/

	/*zadanie 5 */
	srand(time(0));
	float* tab1 = new float[10]();
	float* tab2 = new float[10]();

	for (int i = 0; i < 10; i++) {
		tab1[i] = rand() % 10 + 1;
		cout << tab1[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		tab2[i] = rand() % 10 + 1;
		cout << tab2[i] << endl;
	}

	cout << "Suma: " << endl << suma(&tab1, &tab2) << endl << "Iloczyn: " << endl << iloczyn(&tab1, &tab2) << endl << "Roznica tab1[]: " << roznica(&tab1) << endl << "Roznica tab2[]: "<<roznica(&tab2)<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
