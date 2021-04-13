/**
 * @file create_record.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>
#include "create_record.h"
#include "utility.h"

/**
 * @brief Creating a new entry for the student.
 * 
 * @param book 
 * @return int 
 */

int create_record(book_t *book)
{

  FILE *fp;
  if ((fp = fopen("books.bin", "ab+")) == NULL) 
  {
    return -1;
  }

  fwrite(book, sizeof(book_t), 1, fp);

  __fpurge(stdin);
  fclose(fp);

  return 0;
}

/**
 * @brief Create a new record for Student.
 * 
 * @param book 
 */
void create_new_record(book_t *book) 
{
  printf("\nEnter Book Name: ");
  get_data(book->book_name);

  printf("\nEnter Author Name: ");
  get_data(book->author_name);

  printf("\nEnter Student Roll Number: ");
  get_data(book->student_rollno);
}
