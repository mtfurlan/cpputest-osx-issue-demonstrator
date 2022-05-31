#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness_c.h"

TEST_GROUP_C_WRAPPER(mygroup) { };

/** For each C test */
TEST_C_WRAPPER(mygroup, test_success)

/** Test main as usual */
int main(int ac, char** av)
{
        return RUN_ALL_TESTS(ac, av);
}
