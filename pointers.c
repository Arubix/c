// Andre Blanco
// 20121023

// Pointers

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int a = 20;
    
    int *p;
    int **q;
    int **r;
    int ***s;
    int ***t;
    int ***u;
    int ***v;
    
    p = &a;
    q = &p;
    r = &p;
    s = &q;
    t = &q;
    u = &r;
    v = &r;

    printf("== Pointing P,Q,R to A ==\n");
    printf(" A: %d | *P: %d | *Q: %d | *R: %d\n", a, *p, **q, **r);
    printf("*S: %d | *T: %d | *U: %d | *V: %d\n\n", ***s, ***t, ***u, ***v);
    
    printf("== Addresses ==\n");
    printf(" A: %p | P: %p | Q: %p | R: %p\n", a, p, q, r);
    printf(" S: %p | T: %p | U: %p | V: %p\n\n", s, t, u, v);

    system("pause");
    return 0;
}
