/**
 * @file book.h
 * @author Dhyeya Patel (https://github.com/DhyeyaPatel/Mini_Project.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BOOK_H__
#define __BOOK_H__

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

#endif  //__BOOK_H__