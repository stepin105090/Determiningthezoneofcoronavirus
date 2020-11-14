#include "unity.h"
#include "covid.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_write(void)
{
  char Name[10]; char District[10]; char State[10];
  TEST_ASSERT_EQUAL(0, write( Name,District,State));

}
void test_read(void)
{
  char value[20]; int index = 0;
  TEST_ASSERT_EQUAL(0, read(value, index));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_write);
  RUN_TEST(test_read);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
