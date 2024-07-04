#include"en.h"
#include"sikaku.h"
#include"oya.h"

int main(void) {

	Oya* ishape[2] = { new En ,new Sikaku };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}