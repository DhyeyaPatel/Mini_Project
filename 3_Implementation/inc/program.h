/**
 * @file program.h
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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

/**
 * @brief Create a record object
 * 
 * @param book 
 * @return int 
 */
int create_record(book_t *book);

/**
 * @brief Create a new record object
 * 
 * @param book 
 */
void create_new_record(book_t *book);

/**
 * @brief Delete record
 * 
 * @param name 
 * @return int 
 */
int delete_record(const char* name);

/**
 * @brief Display name of book and name of it's author
 * 
 * @return int 
 */
int display_book(void);

/**
 * @brief Search Book and it's author's name
 * 
 * @param name 
 * @return int 
 */
int search_book(const char* name);

/**
 * @brief Get the data object
 * 
 * @param name 
 */
void get_data(char *name);

/**
 * @brief Get the book details object
 * 
 * @param book 
 */
void get_book_details(book_t *book);



#endif