#pragma once
#include <string>
using namespace std;


class Shape {
protected:
    string colorname;
    int height;
    int width;
    std::string color;
    char symbol;
    int** tab;
    int x, y;

public:
    void Print();
    virtual void Fill() = 0;
    void Alloc();
    Shape(int h, char s, string c);
    ~Shape();

    static int counter;
    friend class Forest;
    Shape* setXY(int x, int y);
};
