#pragma once
#include "Shape.h"
using namespace std;

class Tree : public Shape {
public:
	using Shape::Shape;
	virtual void Fill();
	Tree(int h, char s, string c);
};