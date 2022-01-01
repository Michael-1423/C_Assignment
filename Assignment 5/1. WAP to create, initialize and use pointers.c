//1. WAP to create, initialize and use pointers.

#include <stdio.h>

int main()
{
    int a=5, b=6, *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("%d + %d is %d", *ptr1, *ptr2, *ptr1+*ptr2);
    
}
