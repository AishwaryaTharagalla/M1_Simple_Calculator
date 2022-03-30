#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void){
}

void automated_success_operations()
{
    int ex_res= 0;
    int res=0;

    TEST_ASSERT_EQUAL(SUCCESS, addition(20 ,30 ,&res));
    TEST_ASSERT_EQUAL(50,res);

    TEST_ASSERT_EQUAL(SUCCESS, subtraction(30 ,20 ,&res));
    TEST_ASSERT_EQUAL(10,res);

    TEST_ASSERT_EQUAL(SUCCESS, multiplication(2 ,3 ,&res));
    TEST_ASSERT_EQUAL(6,res);

    TEST_ASSERT_EQUAL(SUCCESS, division(30,3 ,&res));
    TEST_ASSERT_EQUAL(10,res);

    TEST_ASSERT_EQUAL(SUCCESS, modulus(10,3 ,&res));
    TEST_ASSERT_EQUAL(1,res);
}

void automated_overflow_operations()
{
   int ex_res= 0;
    int res=0;

    TEST_ASSERT_EQUAL(OVERFLOW, addition(INT_MAX, 1, &res));

    TEST_ASSERT_EQUAL(OVERFLOW, subtraction(INT_MAX, 1 ,&res));

    TEST_ASSERT_EQUAL(OVERFLOW, multiplication(INT_MAX, 1 ,&res));

    TEST_ASSERT_EQUAL(OVERFLOW, division(INT_MAX, 1,&res));

    TEST_ASSERT_EQUAL(OVERFLOW, modulus(INT_MAX, 1 ,&res));
}

void automated_underflow_operations()
{
   int ex_res= 0;
    int res=0;

    TEST_ASSERT_EQUAL(UNDERFLOW, addition(INT_MIN, -1, &res));

    TEST_ASSERT_EQUAL(UNDERFLOW, subtraction(INT_MIN, -1 ,&res));

    TEST_ASSERT_EQUAL(UNDERFLOW, multiplication(INT_MIN, -1 ,&res));

    TEST_ASSERT_EQUAL(UNDERFLOW, division(INT_MIN, -1,&res));
    
    TEST_ASSERT_EQUAL(UNDERFLOW, modulus(INT_MIN, -1 ,&res));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_success_operations);
    RUN_TEST(automated_overflow_operations); 
    RUN_TEST(automated_underflow_operations);

    return (UnityEnd());
}