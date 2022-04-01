#include <stdio.h>
#include <math.h>
#include "unity.h"
#include "conversion.h"

int calculations(char c,int num1, int num2)
{
    if(c=='a')
    {
        int add;
        add = num1+num2;
        return add;
    }
    if(c=='s')
    {
        int sub;
        sub = num1-num2;
        return sub;
    }
    if(c=='m')
    {
        int mul;
        mul = num1*num2;
        return mul;
    }
    if(c=='d')
    {
        int div;
        div = num1/num2;
        return div;
    }
    if(c=='r')
    {
        int rem;
        rem = num1%num2;
        return rem;
    }
    if(c=='p')
    {
      int s;
      s  = pow(num1,num2);
      return s;
    }
}

void  automated_test_calculations()
{ 
    TEST_ASSERT_EQUAL(40, calculations('a', 25, 15));
    TEST_ASSERT_EQUAL(12, calculations('s', 42, 30));    
    TEST_ASSERT_EQUAL(36, calculations('m', 2, 18));    
    TEST_ASSERT_EQUAL(5, calculations('d', 45, 9)) ;   
    TEST_ASSERT_EQUAL(4, calculations('r', 46, 7));    
    TEST_ASSERT_EQUAL(81, calculations('p', 3, 4));    
}

#if 0
int main()
{
    automated_test_calculations();
    return 0;
}

#endif