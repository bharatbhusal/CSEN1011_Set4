#include <stdio.h>
#include <string.h>


struct Books
{
    char title[50];
    char author[30];
    char subject[50];
    int book_id;

};

int main()
{
    struct Books b1, b2;
    strcpy(b1.title, "Problem Solving with C Programming");
    strcpy(b1.author, "Balaguruswami");
    strcpy(b1.subject, "C Programming");
    b1.title= "Hi there";
    b1.book_id = 3245;
    strcpy(b2.title, "OOP in Python");
    strcpy(b2.author, "Zara Ali");
    strcpy(b2.subject, "Python");
    b2.book_id = 4434;

    printf("Book 1 Title: %s\n", b1.title);
    printf("Book 1 Author: %s\n", b1.author);
    printf("Book 1 Subject: %s\n", b1.subject);
    printf("Book 1 Book ID: %d\n", b1.book_id);
    
    printf("Book 2 Title: %s\n", b2.title);
    printf("Book 2 Author: %s\n", b2.author);
    printf("Book 2 Subject: %s\n", b2.subject);
    printf("Book 2 Book ID: %d\n", b2.book_id);
    return 0;
}