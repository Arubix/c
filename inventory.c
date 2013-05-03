// Andre Blanco
// 20121030

// Inventory

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char name[40];
    short int number;
    double wholesale;
    double retail;
    short int onHand;        
} PRODUCT;

void fillInProducts(PRODUCT[], int *pSize);
void inventoryReport(PRODUCT[], int *);
void lowInv(PRODUCT[], int*);

int main(void){
    
    int effectiveSize = 0;
    PRODUCT hammer = {"Hammer", 1234, 5.50, 8.99, 4};
    PRODUCT inventory[500];
    
    fillInProducts(inventory, &effectiveSize);
    inventoryReport(inventory, &effectiveSize);
    lowInv(inventory, &effectiveSize);
    
    
    printf("\n");
    system("pause");
    return 0;
}
void fillInProducts(PRODUCT inventory[], int *pSize){
    strcpy(inventory[*pSize].name, "Handsaw");
    inventory[*pSize].number = 3456;
    inventory[*pSize].wholesale = 12.34;
    inventory[*pSize].retail = 23.99;
    inventory[*pSize].onHand = 12;
    (*pSize)++;
    
    strcpy(inventory[*pSize].name, "Wrench");
    inventory[*pSize].number = 7423;
    inventory[*pSize].wholesale = 4.50;
    inventory[*pSize].retail = 15.99;
    inventory[*pSize].onHand = 5;
    (*pSize)++;
    
    strcpy(inventory[*pSize].name, "Paintbrush");
    inventory[*pSize].number = 4598;
    inventory[*pSize].wholesale = 1.50;
    inventory[*pSize].retail = 4.99;
    inventory[*pSize].onHand = 21;
    (*pSize)++;
    
    strcpy(inventory[*pSize].name, "Screwdriver");
    inventory[*pSize].number = 6687;
    inventory[*pSize].wholesale = 4.60;
    inventory[*pSize].retail = 12.99;
    inventory[*pSize].onHand = 45;
    (*pSize)++;
    
    strcpy(inventory[*pSize].name, "Drill");
    inventory[*pSize].number = 2536;
    inventory[*pSize].wholesale = 33.39;
    inventory[*pSize].retail = 59.99;
    inventory[*pSize].onHand = 2;
    (*pSize)++;
}
void inventoryReport(PRODUCT inventory[], int *pSize){
    int i = 0;
    
    printf("       Inventory Report  \n");
    printf("       ================  \n");
    printf("Name       Product#   On Hand   Wholesale   Retail\n");
    printf("==================================================\n");
    
    for(i = 0; i < *pSize; i++){
        printf("%11s%6d%9d%14.2lf%10.2lf\n", 
                   inventory[i].name, inventory[i].number, inventory[i].onHand,
                   inventory[i].wholesale, inventory[i].retail);
    }
}
void lowInv(PRODUCT inventory[], int *pSize){
     int i;
    printf("\n\n    Low Inventory Report  \n");
    printf("    ====================  \n");
    printf("Name        Product#   On Hand\n");
    printf("==============================\n");
     
     for(i = 0; i < *pSize; i++)
         if(inventory[i].onHand <= 5)
              printf("%11s%6d%9d\n", 
                  inventory[i].name, inventory[i].number, inventory[i].onHand); 
}
