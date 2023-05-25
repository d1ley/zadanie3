#include <iostream>
using namespace std;

#include "Border.h"

Border::Border(int h, int w, char s, string c, int m) : Rectangle(h, w, s, c)
{
    cout << "Konstruktor border\n";
    marg = m;

    Cut();
}

Border::Border(Rectangle p, int m) : Rectangle(p)
{
    cout << "Konstruktor border z skopiowanym rectangle\n";
    marg = m;

    Cut();

}

void Border::Cut()
{
    int i, j;

    for (j = marg; j < height - marg; j++)
        for (i = marg; i < width - marg; i++)
            tab[j][i] = -1;
}