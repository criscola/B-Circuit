/*
 * Circuit.cpp
 *
 *  Created on: Dec 8, 2017
 *      Author: naopross
 */

#include "sim/dc/Component.hpp"

using namespace bcircuit::dc;

/* Component::iterator class implementation */

Component::iterator::iterator(Component *component): _current(component) {
	if (component == nullptr) {
		throw std::invalid_argument("iterator with nullptr argument");
	}
}

Component::iterator::~iterator() {}

Component Component::iterator::operator++() {}
Component Component::iterator::operator++(int) {}
Component Component::iterator::operator--() {}
Component Component::iterator::operator--(int) {}

const Component& Component::iterator::operator*() {}

/* Component class implementation */

Component::Component() {}

Component::~Component() {}

void Component::connect(Component& next, int pin) {}
void Component::disconnect(Component& comp, int pin) {}

double Component::current(int pin) const {}
