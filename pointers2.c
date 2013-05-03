// Andre Blanco
// 20121023

// Pointers II

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int a = 20;
    int b = 14;
    int c = 9;
    
    int *p;
    int *q;
    int *r;
    
    p = &a;
    q = &b;
    r = &c;

    printf("== Pointing P,Q,R to A,B,C ==\n");
    printf(" A: %d |  B: %d |  C: %d\n", a, b, c);
    printf("*P: %d | *Q: %d | *R: %d\n", *p, *q, *r);
    printf("&P: %p  | &Q: %p | &R: %p\n\n", p, q, r);
    
    p = &c;
    q = &a;
    r = &b;
    
    printf("== Pointing P,Q,R to C,A,B ==\n");
    printf(" A: %d |  B: %d |  C: %d\n", a, b, c);
    printf("*P: %d  | *Q: %d | *R: %d\n", *p, *q, *r);
    printf("&P: %p  | &Q: %p | &R: %p\n\n", p, q, r);

    system("pause");
    return 0;
}
