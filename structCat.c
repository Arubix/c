// Andre Blanco
// 20121030

// Struct CAT

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define SIZE 10

//A
typedef struct{
    double weight;
    char name[40];
    int neutered;
} CAT;

CAT* makeCat(){
     CAT* cat;
     cat = malloc(sizeof(CAT));
     return cat;     
}

void printCat(CAT* cat);
void getMaxInfo(CAT* cat);
void neuter(CAT* cat);
void getRandInfo(CAT* cat);

int main(void){
    srand(time(NULL));
    
    int i;
    
    //B
    CAT *pMax = malloc(sizeof(CAT));
    getMaxInfo(pMax);
    
    //C
    printf("Name      Weight   Neutered\n");
    printf("===========================\n");
    printCat(pMax);
    
    //D
    neuter(pMax);
    printf("\nName      Weight   Neutered\n");
    printf("===========================\n");
    printCat(pMax);
    printf("\n\n");
    
    //E & F
    CAT cats[SIZE];
    printf("\nName      Weight   Neutered\n");
    printf("===========================\n");
    for(i = 0; i < SIZE; i++){
          makeCat(cats[i]);
          getRandInfo(&cats[i]);
          printCat(&cats[i]);
    }
    printf("\n");
    //G
    for(i = 0; i < SIZE; i++)
          neuter(&cats[i]);
          
    printf("\nName      Weight   Neutered\n");
    printf("===========================\n");
    for(i = 0; i < SIZE; i++)      
          printCat(&cats[i]);
          
    //H
    CAT** catHeap = calloc(5, (sizeof(CAT)));
    printf("\n\n=======   Part H   ==========\n\n");
    printf("Name      Weight   Neutered\n");
    printf("===========================\n");
    for(i = 0; i < SIZE; i++){
         catHeap[i] = makeCat(); 
         getRandInfo(catHeap[i]);
         printCat(catHeap[i]);
    }
    for(i = 0; i < SIZE; i++)
          neuter(catHeap[i]);
    printf("\nName      Weight   Neutered\n");
    printf("===========================\n");
    for(i = 0; i < SIZE; i++)
         printCat(catHeap[i]);
    
    printf("\n");
    system("pause");
    return 0;
}
void printCat(CAT* cat){
     printf("%-7s%8.2lf%9.0d", cat->name, cat->weight, 0);
     
     if(cat->neutered == 1)
         printf("Yes\n");
     else
         printf("No\n");
}

void getMaxInfo(CAT* cat){
     strcpy(cat->name, "Max");
     cat->weight = 12;
     cat->neutered = FALSE;   
}
void getRandInfo(CAT* cat){
     char *names[6] = { "Fluffy" , "Tigger", "Max", "Betty", "Cat-27" , "Jake"};
     
     strcpy(cat->name, names[rand() % 6]);
     cat->weight = rand() % (30 - 1 + 1) + 1;
     cat->neutered = rand() % 2;
}
void neuter(CAT* cat){
     if(cat->neutered == 0){
        printf("\n\n%s is not neutered. \nPerforming necesarry " 
                           "actions, please wait...", cat->name);
        printf("\n*Snip* *Snip*\nNeuter Complete.\n\n");
        cat->neutered = 1;
     }
     else
         printf("%s is neutered.\n\n", cat->name);
}
