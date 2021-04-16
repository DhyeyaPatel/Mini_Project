# Requirements
## Introduction
 *  During exams, the students are facing a lot of difficulties while finding the books which they require to study for their exams. As the numbers of books are increasing so it becomes a tedious task to keep a record of the books in the whole library.
 *  Thus, the motive behind this project to ensure that the system is working properly, one can find the location of the book easily, availability, the status of the book, and registration for new students. The whole system will monitored by a computer and so keeping a track of the records will be very easy and also time will be saved for everyone.

## Research
 *  The number of students studying in a school or a university are much more than one can think of keeping a track of records for the students. Register based system to keep a track on books is still being used in some of the schools, but as the number of students as well the number of the books increase, it becomes difficult to manage the records.
 *  Library Checkout is an efficient library management system in which a student can search the book by it's name to know whether it is available in the library or not, helps in creating an entry for the one who wants to issue a book as well as deletiion of that entry when the book being returned.

 ### Benefits
 *  Bettter Tracking of Book Records
 *  Less burden on staff
 *  Reducing wastage of paper
 *  Time Saving
 *  Helps in increased awareness and exposure to library

## Cost and Features
In order to determine the cost to develop library management system, a few aspects are to be considered first.
*   Size of the App: More the features, more the cost.
*   Number of Platforms: As the number of platforms are increased cost will also be increased significantly.
*   Development Region: The development cost per hour in countries of UK, USA and Europe is much higher than that of India.
Hence, to create a Library Management System in India would cost around $25000 to $35000 which will be having very basic features and will be on one single platform only.

## Defining Our System
![system](https://github.com/DhyeyaPatel/Mini_Project/blob/master/5_Images/system.png)
### Explanation
Library Checkout holds some of the very basic features of a library management system:
*   Create a record
*   Delete a record
*   Search a book
*   Display record
The whole system is operated by an admin.

## SWOT ANALYSIS
![swot analysis](https://github.com/DhyeyaPatel/Mini_Project/blob/master/5_Images/swot%20analysis.png)
# 4W&#39;s and 1&#39;H

## Who:
*   Students of a school or a university

## What:
*   Manages records of books in a library of a school or a university.

## When:
*   Earlier library staff used to manage the records of books in registers, but with the advancement in technology this helps in saving time, as well as efforts.

## Where:
*   Library of a School or a University.

## How:
*   The system will help in creating a new record for the student who will issue a book or an article, deleting records of those who have returned, searching of books, and also displaying it's results.

# Detail requirements
## High Level Requirements:
 ID | Description | Status (Implemented/Future)
------ |-----------| --------------
`HR01` | The admin should be able to create new records| Technical-Implemented
`HR02 `| The admin should be able to delete the records| Technical-Implemented
`HR03 `| The admin should be able to read the records| Technical-Implemented
`HR04 `| The student should be able to search the book records| Technical-Implemented
`HR05 `| The admin shoould be able to display the searched records from the file| Technical-Implemented
`HR06 `| There should be no data loss in case of system failure | Future
`HR07 `|There should be no data breach or leakage and the data should be safe| Future


##  Low level Requirements:
ID | Description | Status (Implemented/Future)
------ |-----------| --------------
`LR01` | New Records shall be added by providing all the asked information like book number, book author and student roll number. | `HR01` | Implemented
`LR02` | If student searches for a book and if it's record is found then the name and author of that book will be displayed. | `HR04` & `HR05` | Implemented
`LR03` | If student searches for a book and if not then no record found will be displayed. | `HR05` | Implemented
`LR04` | Student needs to search by the name of the book and the name of the author." | `HR04` | Implemented
`LR05` | When the program is ran, all the options should be displayed on screen(create,delete,search,display,exit). If incorrect input is given by user then, print the message "selected option unavailable" | `HRxx` | Implemented
