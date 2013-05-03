// Andre Blanco
// 20121006
// Assignment 10 Part I

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        char name[40];
        int customerID;
        double amountOwing;
} CUSTOMER;
CUSTOMER* makeACustomer(){
        CUSTOMER* result;
        
        result = malloc(sizeof(CUSTOMER));
        
        return result;         
}

void getCustomerInfo(CUSTOMER* customer);

//Alternate Main()
//int main(void){
//    int i;
//    CUSTOMER myCustomers[10];
//    CUSTOMER* myDynamicCustomers;
//    CUSTOMER** myIndividualCustomers;
//    CUSTOMER firstCustomer;
//    
//    getCustomerInfo(&firstCustomer);
//    
//    myIndividualCustomers = calloc(10, sizeof(CUSTOMER*));
//    
//    for(i = 0; i < 10; i++)
//          myIndividualCustomers[i] = makeACustomer();
//          
//    strcpy(myIndividualCustomers[0] -> name, "Judy XXXXXXX");
//    myIndividualCustomers[0]->customerID = 78965;
//    myIndividualCustomers[0]->amountOwing = 789.99;
//    
//    // myCustomers[0].name = "Bob Smith;
//    strcpy(myCustomers[0].name, "Bob Smith");
//    myCustomers[0].customerID = 12345;
//    myCustomers[0].amountOwing = 123.45;
//    
//    myDynamicCustomers = calloc(10, sizeof(CUSTOMER));
//    
//    if(myDynamicCustomers == NULL){
//        printf("Allocation of memory failed...\n");
//        exit(-1);
//    }
//    
//    strcpy(myDynamicCustomers[0].name, "Bob Smith");
//    myDynamicCustomers[0].customerID = 12345;
//    myDynamicCustomers[0].amountOwing = 123.45;
//    
//    strcpy(myDynamicCustomers[0].name, "Mary Smith");
//    myDynamicCustomers[0].customerID = 54321;
//    myDynamicCustomers[0].amountOwing = 456.87;
//    
//    
//    free(myDynamicCustomers);
//    
//    system("pause");
//    return 0;
//}

int main(void){
     CUSTOMER** myCustomers;
     int effectiveSize = 0;
     
     myCustomers = calloc(100, sizeof(CUSTOMER*));  
       
     myCustomers[effectiveSize] = makeACustomer();
     getCustomerInfo(myCustomers[effectiveSize]);
     effectiveSize++;
     myCustomers[effectiveSize] = makeACustomer();
     getCustomerInfo(myCustomers[effectiveSize]);
     effectiveSize++;
     myCustomers[effectiveSize] = makeACustomer();
     getCustomerInfo(myCustomers[effectiveSize]);
     effectiveSize++;
     
     free(myCustomers);
     
     system("pause");
     return 0;
}
void getCustomerInfo(CUSTOMER* customer){
     printf("Enter the customer name: ");
     scanf("%s", customer->name);
     printf("Enter the Customer ID: ");
     scanf("%d", &customer->customerID);
     printf("Enter amount owing: ");
     scanf("%lf", &customer->amountOwing);
}
