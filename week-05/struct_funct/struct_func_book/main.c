#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changeing or setting the Title
 *    * Changeing or setting the Author
 *    * Changeing or setting the Year of publication
 *    * Getting each of these separately by a singel function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */

 typedef struct {
    char title[20];
    char author[20];
    int year;
 } Book;

 void new_book(int counter, char *titl, char *auth, int year, Book *books){
    strcpy(books[counter].title, titl);
    strcpy(books[counter].author, auth);
    books[counter].year = year;
 }

int main()
{
    Book books[10] = {0};
    int counter = 0;

    char titl[20];
    char auth[20];
    int year = 0;

    printf("Give me the parameters of new book: title: ");
    gets(titl);
    printf("\nAuthor: ");
    gets(auth);
    printf("\nyear: ");
    scanf("%d", &year);

  /*  strcpy(books[0].author, auth);
    strcpy(books[0].title , titl);
    books[0].year = year; */
    new_book(counter, titl, auth, year, books);
   // &book[3].year
    printf("Author: %s \tTitle: %s, Year: %d", books[counter].author, books[counter].title, books[counter].year);

    return 0;
}
