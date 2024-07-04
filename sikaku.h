#pragma once
#include"oya.h"

class Sikaku :public Oya {
public:
	void Size() override;
	void Draw() { printf("ñ êœ %f\n", size); };
};