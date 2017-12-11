/*
 * Circuit.hpp
 *
 *  Created on: Dec 8, 2017
 *      Author: naopross
 */

#ifndef SRC_SIM_COMPONENT_HPP_
#define SRC_SIM_COMPONENT_HPP_

#include <vector>
#include <map>

namespace bcircuit {
namespace dc {

class Component {
public:
	class iterator {
	public:
		iterator(Component *component);
		~iterator();

		Component operator++();
		Component operator++(int);
		Component operator--();
		Component operator--(int);

		const Component& operator*();

	private:
		Component *_current;
	};

	Component();
	virtual ~Component();

	void connect(Component& next, int pin);
	void disconnect(Component& comp, int pin);

	virtual double current(int pin) const;

private:
	std::map<int, std::pair<bool, std::vector<Component*>>> _connections;
};

} /* namespace dc */
} /* namespace bcircuit */

#endif /* SRC_SIM_COMPONENT_HPP_ */
