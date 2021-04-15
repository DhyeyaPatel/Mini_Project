/**
 * @file utility.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "utility.h"
#include "book.h"

/**
 * @brief Taking Input Parameters
 * 
 * @param name 
 */

void get_data(char *name) 
{
  int i = 0, j;
  char c, ch;
  fflush(stdin);
  do 
  {
    c = getchar();

    if (c != '\n') 
    {
      *(name + i) = c;
      putchar(c);
      i++;
    }
    if (c == 8) 
    {
      if (i > 0) 
      {
        i--;
      }
      for (j = 0; j < i; j++) 
      {
        ch = *(name + j);
        putchar(ch);
      }
    }
  } while (c != '\n');
  
  *(name + i) = '\0';
}

/**
 * @brief Get Book Details
 * 
 * @param book_t 
 */

void get_book_details(book_t *book) 
{
  printf("\nEnter Book Name: ");
  fflush(stdin);
  get_data(book->book_name);

  printf("\nEnter the Author Name: ");
  fflush(stdin);
  get_data(book->author_name);

  printf("\nEnter Student Roll number: ");
  fflush(stdin);
  get_data(book->student_rollno);
}