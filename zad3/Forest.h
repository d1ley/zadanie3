#include "Tree.h"
#include"Shape.h"
#include <vector>

using namespace std;

class Forest {
private:
    int** tab;
    int tabX, tabY;
    vector<Shape*>shapes;

public:
    Forest(int y, int x);
    ~Forest();

    void printTab();
    // void AddTree(int y, int x, int h, char s, string color);
    void AddShape(Shape* sh, int y, int x);

    Forest& operator+=(Shape* sh);

};