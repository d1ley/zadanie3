#include <iostream>
#include "Rectangle.h"
#include "Tree.h"
#include "Border.h"
#include "Forest.h"
#include "Shape.h"
#include "Trapeze.h"

using namespace std;

int Shape::counter = 0;

int main() {

	Forest las = Forest(100, 100);


	Trapeze* roof = new Trapeze(4, '*', "yellow");
	las.AddShape(roof, 14, 18);


	Rectangle* wall = new Rectangle(7, 12, '*', "red");
	las.AddShape(wall, 18, 22);


	Rectangle* door = new Rectangle(4, 3, '*', "green");
	las.AddShape(door, 21, 30);


	Border* window = new Border(3, 4, '*', "green", 1);
	las.AddShape(window, 19, 24);

	Tree* drzewo = new Tree(5, '*', "green");
	las.AddShape(drzewo, 16, 55);

	Rectangle* stolb = new Rectangle(4, 3, '*', "red");
	las.AddShape(stolb, 21, 58);




	las.printTab();
}