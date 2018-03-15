#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int 
main(int argc, char* argv[]){
	char str[3];
	strcpy(str, argv[1]);
	
	if(!strcmp(str, "new")){
		printf("Enter new book's parameters:\n");
		newbook();
	}
	
	sort();
	return 0;
}
