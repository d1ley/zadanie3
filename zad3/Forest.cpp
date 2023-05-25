#include <iostream>
#include <vector>

using namespace std;

#include "Forest.h"

Forest::Forest(int y, int x)
{
    int j, i;
    tabY = y;
    tabX = x;
    tab = new int* [tabY];
    for (j = 0; j < tabY; j++) {
        tab[j] = new int[tabX];
        for (i = 0; i < tabX; i++) {
            tab[j][i] = 0;
        }
    }
}

Forest::~Forest()
{
    int j;

    for (j = 0; j < tabY; j++)
        delete tab[j];
    delete tab;

    for (auto t : shapes)
        delete t;
    shapes.clear();

}

void Forest::printTab()
{
    int i, j;
    for (j = 0; j < tabY; j++) {
        for (i = 0; i < tabX; i++) {
            int ind = tab[j][i];
            if (ind) {
                cout << shapes[ind - 1]->color;
                cout << shapes[ind - 1]->symbol;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << "\033[0m" << endl;
    }
}

Forest& Forest::operator+=(Shape* sh) {
    this->AddShape(sh, sh->y, sh->x);
    return *this;

}

void Forest::AddShape(Shape* sh, int y, int x) {
    int i, j;
    sh->x = x;
    sh->y = y;

    shapes.push_back(sh);

    for (j = 0; j < sh->height; j++) {
        for (i = 0; i < sh->width; i++) {
            if (sh->tab[j][i] == 1)
                tab[j + y][i + x] = sh->tab[j][i] * shapes.size();
            else
                tab[j + y][i + x] = 0;
        }

    }



}