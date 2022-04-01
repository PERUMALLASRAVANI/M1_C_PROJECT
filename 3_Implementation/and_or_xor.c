#include<stdio.h>
#include "unity.h"
#include "conversion.h"

int bitwise(char c, int n1, int n2)
{
    if(c=='a')
    {
        int a;
        a = n1&n2;
        return a;
    }
    if(c=='o')
    {
        int o;
        o = n1|n2;
        return o;
    }

    if(c=='x')
    {
        int x;
        x = n1^n2;
        return x;
    }
}

void automated_test_bitwise()
{
    TEST_ASSERT_EQUAL(8, bitwise('a', 12, 25));
    TEST_ASSERT_EQUAL(29, bitwise('o', 12, 25));    
    TEST_ASSERT_EQUAL(21, bitwise('x', 12, 25));       

}

#if 0
int main()
{
    automated_test_bitwise();
    return 0;
}
#endif