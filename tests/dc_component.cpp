#include <cgreen/cgreen.h>

using namespace cgreen;

// #include "sim/dc/Component.hpp"

Describe(Component);
BeforeEach(Component) {}
AfterEach(Component) {}

Ensure(Component, sample_test) {
    assert_that(0 == 1);
}

TestSuite *dc_component_tests() {
    TestSuite *suite = create_test_suite();
    
    add_test_with_context(suite, Component, sample_test);

    return suite;
}
