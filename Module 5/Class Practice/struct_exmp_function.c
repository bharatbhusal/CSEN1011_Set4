#include <stdio.h>
#include <string.h>


typedef struct
{
    char title[50];
    char author[30];
    char subject[50];
    int book_id;

} Book;

void printBook(Book b)
{
    printf("Book Title: %s\n", b.title);
    printf("Book Author: %s\n", b.author);
    printf("Book Subject: %s\n", b.subject);
    printf("Book Book ID: %d\n", b.book_id);
    
}
int main()
{
    Book b1, b2;
    strcpy(b1.title, "Problem Solving with C Programming");
    strcpy(b1.author, "Balaguruswami");
    strcpy(b1.subject, "C Programming");
    b1.book_id = 3245;
    strcpy(b2.title, "OOP in Python");
    strcpy(b2.author, "Zara Ali");
    strcpy(b2.subject, "Python");
    b2.book_id = 4434;
    printf("1st Books details:\n");
    printBook(b1);
    printf("\n\n2st Books details:\n");
    printBook(b2);
    return 0;
}