/**
 * @file display_book.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/program.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Displaying the name of the book and author.
 * 
 * @return int 
 */

int display_book(void)
{
  book_t book;
  FILE *fp;

  int count = 0;
  if ((fp = fopen("books.bin", "rb")) == NULL) 
  {
    return -2;
  }

  //printf("\n### BOOK and it's AUTHOR ###\n");
  
  while (fread(&book, sizeof(book), 1, fp) == 1) 
  {
    printf("\nBOOK NAME = %s\nNAME OF AUTHOR = %s\n",book.book_name,book.author_name);
    count++;
  }

  fclose(fp);
  return count;
}