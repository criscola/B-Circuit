#include <cgreen/cgreen.h>
#include "sim/dc/Component.hpp"

using namespace cgreen;
using namespace bcircuit;

Describe(Component);
BeforeEach(Component) {}
AfterEach(Component) {}

Ensure(Component, invalid_iterator_test) {
	assert_throws(std::invalid_argument, {dc::Component::iterator(nullptr);});
}

Ensure(Component, always_fail) {
	assert_that(1 == 0);
}


TestSuite *dc_component_tests() {
    TestSuite *suite = create_test_suite();
    
    add_test_with_context(suite, Component, invalid_iterator_test);
    add_test_with_context(suite, Component, always_fail);

    return suite;
}
