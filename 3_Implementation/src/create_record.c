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
#include <stdlib.h>
#include "../inc/program.h"

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

  fflush(stdin);
  fclose(fp);

  return 0;
}

