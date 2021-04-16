/**
 * @file library_checkout_test.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "../inc/program.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


/**
 * @brief Test Case for creating record
 * 
 */
void test_create_record(void) 
{
  book_t new_record = {"Power Electronics", "P.S. Bimbhra", "17BEE100"};
  TEST_ASSERT_EQUAL(0, create_record(&new_record));
}

/**
 * @brief Test case for deleting record
 * 
 */
void test_delete_record(void) 
{
  book_t new_record = {"Power Electronics", "P.S. Bimbhra", "17BEE100"};
  TEST_ASSERT_EQUAL(0, create_record(&new_record));
  TEST_ASSERT_EQUAL(0, delete_record(new_record.book_name));
}

/**
 * @brief Test case for searching book
 * 
 */
void test_search_book(void) 
{
  book_t new_record = {"Power Electronics", "P.S. Bimbhra", "17BEE100"};
  TEST_ASSERT_EQUAL(0, create_record(&new_record));
  TEST_ASSERT_EQUAL(0 , search_book(new_record.book_name));
  TEST_ASSERT_EQUAL(0 , delete_record(new_record.book_name));
}

/**
 * @brief Test case for displaying book
 * 
 */
void test_display_book(void) 
{ 
  TEST_ASSERT_EQUAL(0, display_book()>0);
}

/**
 * @brief Main Function
 * 
 * @return int 
 */
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_create_record);
  RUN_TEST(test_delete_record);
  RUN_TEST(test_search_book);
  RUN_TEST(test_display_book);

  /* Close the Unity Test Framework */
  return UNITY_END();
}







