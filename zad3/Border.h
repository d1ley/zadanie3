#include "Rectangle.h"
using namespace std;

class Border : public Rectangle
{
public:
    int marg;
    Border(int h, int w, char s, string c, int m);
    Border(Rectangle p, int m);
    void Cut();
};