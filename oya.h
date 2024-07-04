#pragma once
#include<stdio.h>

class Oya {
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};