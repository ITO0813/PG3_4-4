#pragma once
#include"oya.h"

class Sikaku :public Oya {
public:
	void Size() override;
	void Draw() { printf("�ʐ� %f\n", size); };
};