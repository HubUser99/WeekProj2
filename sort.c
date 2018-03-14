#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

void
sort(){
	FILE* in = fopen("bookTable.txt", "r");
	book_t array[100];
	
	int i = 0, j, k;
	
	char str[20];
	
	char* ptr;
	
	while(fscanf(in, "%s", str)!= EOF){
		strcpy(array[i].title, str);
		printf("%s\n", array[i].title);
		
		fscanf(in, "%s", str);
		
		array[i].price = (double) strtol(str, &ptr, 3);
		printf("%lf\n", array[i].price);
		
		fscanf(in, "%s", str);
		
		array[i].pages = atoi(str);
		printf("%d\n", array[i].pages);
		
		fscanf(in, "%s", str);
		
		strcpy(array[i].author, str);
		printf("%s\n", array[i].author);
		
		fscanf(in, "%s", str);
		
		array[i].year = atoi(str);
		printf("%d\n", array[i].year);

		i++;
	}

	fclose(in);
	
	for(j = 0; j < i; j++){
		for(k = 0; k < i - j; k++){
			
		}	
	}
}

int 
minInt(){

}
