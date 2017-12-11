#include "sim/dc/Component.hpp"
#include "sim/dc/Resistor.hpp"

using namespace bcircuit;

int main(int argc, char *argv[]) {

	dc::Component *comp = new dc::Component();
	dc::Component::iterator it(comp);

	delete comp;

	return 0;
}
