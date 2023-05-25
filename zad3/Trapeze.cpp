#include <iostream>
using namespace std;
#include "Trapeze.h"


Trapeze::Trapeze(int h, char s, string c) : Rectangle(h, 5 * h, s, c) {
	cout << "Konstruktor Trapeze\n";
	Cut();

}

void Trapeze::Cut() {
	int i, j;
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < height - j; i++)

			tab[j][i] = 0;

		for (i = width - height + j; i < width; i++)

			tab[j][i] = 0;


	}
}