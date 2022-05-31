# include <lib.h>
#include "CppUTest/TestHarness_c.h"


TEST_C(mygroup, test_success)
{
    CHECK_EQUAL_C_INT(5, add(2, 3));
}
