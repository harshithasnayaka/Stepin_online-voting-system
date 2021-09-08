/**
 * @file test_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
void setUp() {}
void tearDown() {}

void test_extractYear(void)
{
    char userid[15] = "2021BTCSE00025";
    TEST_ASSERT_EQUAL(2021,extractYear(userid));
}

int main()
{
    UNITY_BEGIN();
    
    RUN_TEST(test_extractYear);
    
    return UNITY_END();
}
