/**
 * @file library_checkout.c
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_checkout.h"

typedef enum options {
  NONE,
  CREATE_RECORD,
  DELETE_RECORD,
  DISPLAY_BOOK,
  SEARCH_BOOK,
  EXIT
} options_t;

/**
 * @brief Main Function
 * 
 * @return int 
 */

int main() 
{
  int choice = NONE;

  printf("\n\t-------Welcome to Library Checkout-------\n");
  for (;;) 
  {
    printf("\nSelect your choice: \n");
    printf("1.Create Record \n2.Delete Record\n3.Display all books\n4.Search for a book\n5.Exit\n");

    //printf("Enter your choice: ");
    __fpurge(stdin);
    scanf("%d", &choice);

    switch (choice) 
    {
        case CREATE_RECORD: 
        {
            book_t *new_record = (book_t *)calloc(1, sizeof(book_t));

            get_book_details(new_record);

            switch (create_record(new_record)) 
            {
                case 0:
                    printf("\n\t Creating Record was successful");
                    break;
                default:
                    printf("\n\tError in Creating Record!");
            }
            free(new_record);
            break;
    }
    case DELETE_RECORD: 
    {
      int record_count = display_book();

        if (0 < record_count) 
        {
            char book_name[MAX_NAME_LENGTH] = "";

            printf("Enter book's Name from above list:");
            get_data(book_name);

                switch (delete_record(book_name)) 
                {
                    case -1:
                        printf("\n\t***No Matching book found***\n");
                        break;
                    case -2:
                        printf("\n\t***No book found***\n");
                        break;
                    case 0:
                        printf("\n\t***Book record deleted successfuly***\n");
                        break;
                    default:
                        printf("\n\t***Error in Delete Record!");
                }

        } 

        else if (record_count == 0) 
        {
            printf("\n\t***No book found***\n");
        }
        break;
    }

    
    case DISPLAY_BOOK:
    switch (display_book()) 
    {
      case -2:
        printf("\n\t***No Books found***\n\n");
        break;

      case 0:
        printf("\n\t***No Books found***\n\n");
        break;

      default:
        printf("\n\tDisplay book name was successfull\n");
    }
    break;

    case SEARCH_BOOK: 
    {
      int record_count = display_book();
      if (0 < record_count) {
        char book_name[MAX_NAME_LENGTH] = "";

        printf("\nEnter name of person to search\n");
        __fpurge(stdin);
        get_data(book_name);

        switch (search_book(book_name)) {
        case -1:
          printf("\n\t***No Matching Book found***\n");
          break;
        case -2:
          printf("\n\t***No Book found***\n\n");
          break;
        case 0:
          printf("\n\t***Search Successful***\n");
          break;
        default:
          printf("\n\t***Error in Search name***");
        }
      }

      else if (record_count == 0) {
        printf("\n\t***No book found***\n");
      }
      break;
    }
    case EXIT:
      printf("\n\t****Exiting application!!****\n");
      exit(0);
      break;

    default:
      printf("\n\t***Selected option not available!***");
    }
  }
}
