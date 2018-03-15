#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int comp(const void*, const void*);

void
sort(){
	FILE* in = fopen("bookTable.txt", "r");
	book_t array[100];
	
	
	int i = 0, j, k;
	
	char str[20];
	
	double d;
	
	while(fscanf(in, "%s", str)!= EOF){
		strcpy(array[i].title, str);
		printf("%s\n", array[i].title);
		
		fscanf(in, "%s", str);
		sscanf(str, "%lf", &d);
		
		array[i].price = d;
		printf("%lf\n", array[i].price);
		
		fscanf(in, "%s", str);
		
		array[i].pages = atoi(str);
		printf("%d\n", array[i].pages);
		
		fscanf(in, "%s", str);
		
		strcpy(array[i].author, str);
		printf("%s\n", array[i].author);
		
		fscanf(in, "%s", str);
		
		array[i].year = atoi(str);
		printf("%d\n\n", array[i].year);

		i++;
	}

	fclose(in);
	
	for(j = 0; j < i; j++){
		for(k = 0; k < i - j; k++){
			
		}	
	}
}

int 
comp (const void * elem1, const void * elem2) 
{
	int f = *((int*)elem1);
	int s = *((int*)elem2);
	if (f > s) return  1;
	if (f < s) return -1;
	return 0;
}
