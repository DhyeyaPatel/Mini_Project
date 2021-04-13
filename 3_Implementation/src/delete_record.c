/**
 * @file delete_record.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "delete_record.h"
#include "utility.h"

/**
 * @brief Deleting record of the previous issue by the student
 * 
 * @param name 
 * @return int 
 */

int delete_record(const char *book_name) 
{
  book_t book;
  FILE *fp, *fptr;

  int flag, result;

  fp = fopen("books.bin", "rb");
  if (fp == NULL) 
  {
    return -2;
  }
 else 
 {
    fptr = fopen("temp.bin", "wb+");
    if (fptr == NULL) 
    {
      result = -3;
    } 
    else 
    {
      while (fread(&book, sizeof(book_t), 1, fp) == 1) 
      {
        if (strcmp(book.book_name, book_name) != 0)
          fwrite(&book, sizeof(book_t), 1, fptr);

        if (strcmp(book.book_name, book_name) == 0)
          flag = 1;
      }
      fclose(fp);
      fp = NULL;
      fclose(fptr);

      if (flag != 1) 
      {
        remove("temp.bin");
        result = -1;
      }
      
      else 
      {
        remove("books.bin");
        rename("temp.bin", "books.bin");
        result = 0;
      }
    }
  }
  if (NULL != fp)
    fclose(fp);

  return result;
}
