
#ifndef _PROGRAM_H_
#define _PROGRAM_H_

enum max_lengths
{
    MAX_NAME_LENGTH = 32,
    MAX_AUTHOR_NAME = 15,
    MAX_ROLLNO_LENGTH = 8
};

typedef struct book_t
{
    char book_name[MAX_NAME_LENGTH];
    char author_name[MAX_AUTHOR_NAME];
    char student_rollno[MAX_ROLLNO_LENGTH];

}book_t;

int create_record(book_t *book);

void create_new_record(book_t *book);

int delete_record(const char* name);

int display_book(void);


int search_book(const char* name);

void get_data(char *name);

void get_book_details(book_t *book);



#endif