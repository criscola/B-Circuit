#include <cgreen/cgreen.h>

using namespace cgreen;

/* prototypes for tests in other files */
TestSuite *dc_component_tests();


int main(int argc, char *argv[]) {

    TestSuite *suite = create_test_suite();

    /* suites */
    add_suite(suite, dc_component_tests());

    /* run tests */
    if (argc > 1) {
        return run_single_test(suite, argv[1], create_text_reporter());
    }

    return run_test_suite(suite, create_text_reporter());
}
