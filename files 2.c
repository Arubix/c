// Andre Blanco
// 20121113

// fun with files II

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	FILE* binFile;
	int random;
	int i;
	int sum = 0;
	double average = 0;
	int all[100];

	binFile = fopen("C:\\My Files\\myBinFile.bin", "wb");

	if(binFile == NULL){
		printf("Failed to open...");
		exit(-1);
	}

	srand(123);

	for(i = 0; i < 100; i++){
		random = rand() % 100 + 1;
		fwrite(&random, sizeof(int), 1, binFile);
	}
	fclose(binFile);

	binFile = fopen("C:\\My Files\\myBinFile.bin", "rb");

	for(i = 0; i < 100; i++){
		fread(&random, sizeof(int), 1, binFile);
		sum += random;
	}
	fclose(binFile);


	binFile = fopen("C:\\My Files\\myBinFile.bin", "rb");
	fread(all, sizeof(int) , 100, binFile);
	fseek(binFile, 30 * sizeof(int), SEEK_SET); // SEEK_CUR & SEEK_END
	fread(&random, 1, sizeof(int), binFile);
	printf("THe 30th int is %d. \n\n", random);
	fclose(binFile);

	average = (double)sum / 100;
	printf("Average of 100 numbers between 1-100: %.3lf\n\n", average);

	system("pause");
	return 0;
}
