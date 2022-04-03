#include "unity.h"
#include "function.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changepriceticket(void)
{
    int price1=125;
    TEST_ASSERT_EQUAL(125,changepriceticket(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changepriceticket);
  return UNITY_END();
}
