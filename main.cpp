#include "engine.h"


int main() {

	Engine engine(500, 500);

	if (engine.init() == -1) {
		return -1;
	}

	engine.run();

	return 0;

}