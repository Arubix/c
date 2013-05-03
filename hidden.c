// Andre Blanco
// 20121113

// Hidden Message

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* message;
    int skip;
    
    message = fopen("C:\\My Files\\Message.dat", "rb");
    
    if(message == NULL){
        printf("Failed to open file...\n\nProgram will now exit.");
        sleep(2000);
        exit(-1);
    }

    while(fread(&skip, sizeof(int), 1, message)){
          fseek(message, skip, SEEK_CUR);
          printf("%c", getc(message));
    }
    printf("\n\n");           
    fclose(message);

   system("pause");
   return 0;
}
