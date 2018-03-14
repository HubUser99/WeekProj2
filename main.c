#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int 
main(int argc, char* argv[]){

const int len = strlen(argv[1]);
argv[1][len] = '\0';
	
	if(strcmp(argv[1], "new")){
		printf("Enter new book's parameters:\n");
		newbook();
	}
	sort();
	return 0;
}
