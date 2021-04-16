/**
 * @file search_contact.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/program.h"
#include<stdio.h>
#include<string.h>

/**
 * @brief Searching the name and author of the books
 * 
 * @param name 
 * @return int 
 */

int search_book(const char* name)
{
    book_t book;
    FILE *fp = NULL;

    fp = fopen("books.bin","r");

    if(fp==NULL)
    {
        printf("\nFILE NOT OPENED!\n");
        return -2;
    }

    while (fread(&book, sizeof(book_t), 1, fp) == 1) 
    {
        if (strcmp(book.book_name, name) == 0) 
        {
            printf("Book Name = %s\nAuthor Name = %s\n",book.book_name,book.author_name);
            fclose(fp);
            return 0;
    }
  }
  fclose(fp);
  return -1;
}
