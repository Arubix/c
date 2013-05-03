// Andre Blanco
// 20121113

// fun with files

#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE* myTextFile;
	char ch;
	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0, space = 0;
	char word[100];

	// Writing to the file
	myTextFile = fopen("C:\\My Files\\firstTextFile.txt", "w");

	if(myTextFile == NULL)
		printf("Failed to open file... \n\n");

	fprintf(myTextFile, "Open a file for text writing.\n");
	fprintf(myTextFile, "Put all of the text in the file that appears on its side.\n\n");

	fclose(myTextFile);

	// Reading the file and counting vowels
	myTextFile = fopen("C:\\My Files\\firstTextFaile.txt", "r");

	while( (ch = getc(myTextFile)) != EOF){
		printf("%c", ch);
		switch(ch){
			case 'a': 
			case 'A':
				aCount++;
				break;
			case 'e': 
			case 'E':
				eCount++;
				break;
			case 'i': 
			case 'I':
				iCount++;
				break;
			case 'o': 
			case 'O':
				oCount++;
				break;
			case 'u': 
			case 'U':
				uCount++;
				break;
		}
	}
	printf("\nA count: %d\n", aCount);
	printf("E count: %d\n", eCount);
	printf("I count: %d\n", iCount);
	printf("O count: %d\n", oCount);
	printf("U count: %d\n\n", uCount);
	fclose(myTextFile);

	// reading file and counting words
	myTextFile = fopen("C:\\My Files\\firstTextFile.txt", "r");

	while(fscanf(myTextFile, "%s", word) != EOF)
		space++;
	
	printf("%d words in the file.\n\n", space);
	fclose(myTextFile);

	system("pause");
	return 0;
}
