#include "unity.h"
#include "addition.h"
#include "substraction.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_addition(void)
{


  TEST_ASSERT_EQUAL(7, calculator(2,5,"add"));

  TEST_ASSERT_EQUAL(23, calculator(13,10,"add"));

}
void test_substraction(void)
{


  TEST_ASSERT_EQUAL(3, calculator(2,5,"sub"));

  TEST_ASSERT_EQUAL(3, calculator(13,10,"sub"));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_substraction);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
