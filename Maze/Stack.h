#pragma once
#include <stdio.h>
#include "Point.h"

class Stack {
private:
	int sp;
	int maxSize;
	Point *stack;
public:
	Stack(int stackSize);
	int Size();
	void Push(Point point);
	Point Pop();
	~Stack();
};

Stack::Stack(int maxSize) {
	stack = new Point[maxSize];

	sp = 0;
	this->maxSize = maxSize;
}

int Stack::Size() {
	return sp;
}

void Stack::Push(Point point)
{
	if (sp < maxSize)
		stack[sp++] = point;
}

Point Stack::Pop() {
	if (sp > 0)
		return stack[--sp];
	else
		return Point();
}

Stack::~Stack() {
	delete(stack);
}