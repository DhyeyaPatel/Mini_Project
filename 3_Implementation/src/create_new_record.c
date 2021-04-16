#include <../inc/program.h>
#include<stdio.h>


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
