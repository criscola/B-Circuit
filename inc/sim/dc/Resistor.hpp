/*
 * Resistance.hpp
 *
 *  Created on: Dec 8, 2017
 *      Author: naopross
 */

#ifndef SRC_SIM_DC_RESISTOR_HPP_
#define SRC_SIM_DC_RESISTOR_HPP_

#include "Component.hpp"

namespace bcircuit {
namespace dc {

class Resistor: public Component {
public:
	Resistor();
	virtual ~Resistor();

private:
	double _r;
};

} /* namespace dc */
} /* namespace bcircuit */

#endif /* SRC_SIM_DC_RESISTOR_HPP_ */
