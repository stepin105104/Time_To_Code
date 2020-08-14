#include "unity.h"
#include "prime_number.h"
#include <stdbool.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime_number(void)
{


  TEST_ASSERT_EQUAL(true, prime_number(2));

  TEST_ASSERT_EQUAL(true, prime_number(13));

}
void test_not_prime_number(void)
{


  TEST_ASSERT_EQUAL(false, prime_number(1));

  TEST_ASSERT_EQUAL(false, prime_number(4));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime_number);
  RUN_TEST(test_not_prime_number);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
