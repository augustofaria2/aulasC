#include <stdio.h>

int main(){

    int p = 0;
    int ptr_p = &p;

    printf("%d\n", p);
    p++;
    printf("%d\n", p);

    printf("%p\n", ptr_p); 
    (ptr_p)++;
    printf("%p\n", ptr_p);
    ptr_p++;
    printf("%p\n", ptr_p);

    return 0;

}
