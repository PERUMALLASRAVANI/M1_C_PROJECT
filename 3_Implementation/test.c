#include "unity.h"

extern void automated_test_bitwise();
extern void automated_test_calculations();

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_bitwise);
    RUN_TEST(automated_test_calculations);

return (UnityEnd());
}