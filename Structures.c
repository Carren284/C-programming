//c structure
//Name:Carren Cherotich
//Reg no:CT101/G/22817/24
#include <stdio.h>
#include <string.h>

struct book {
char title[30];
char author[30];
int publication_year;
char isbn[13];
float price;
};
int main() {
struct book book1;
  
strcpy(book1.title, "Introduction to C Programming");
strcpy(book1.author, "John Smith");
book1.publication_year = 2022;
strcpy(book1.isbn, "9780131103627");
book1.price = 49.99;

printf("Title: %s\n", book1.title);
printf("Author: %s\n", book1.author);
printf("Publication year: %d\n", book1.publication_year);
printf("ISBN: %s\n", book1.isbn);
printf("Price: %.2f\n", book1.price);

printf("Enter the title: ");
scanf("%s",&book1.title);
printf("Enter the author: ");
scanf("%s",&book1.author);
printf("Enter the publication year: ");
scanf("%d", &book1.publication_year);
printf("Enter the ISBN: ");
scanf("%s", book1.isbn);
printf("Enter the price: ");
scanf("%f", &book1.price);
  
  return 0;
  
}
    