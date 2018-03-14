#include <stdio.h>
#include <string.h>
#include "func.h"

void
newbook(){
	book_t book;
	
	FILE* out = fopen("bookTable.txt", "a+");

	printf("Book title: ");
	scanf("%s", book.title);
	
	printf("Author: ");
	scanf("%s", book.author);
	
	printf("Price: ");
	scanf("%lf", &book.price);
	
	printf("Pages: ");
	scanf("%d", &book.pages);
		
	printf("Year of publish: ");
	scanf("%d", &book.year);
	
	fprintf(out, "%10s %4.2lf %6d %10s %6d\n", book.title, book.price, book.pages, book.author, book.year);
	
	fclose(out);
}
