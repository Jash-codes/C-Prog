#include<stdio.h>

void usestatic(){
    static int counter = 0;
    counter++;
    printf(" Static count = %d\n" ,counter);

}

void usepointer(){
    int a = 25;
    int *p = &a;

    printf(" value of a = %d\n", a);
    printf("address of a = %d\n",(void*)&a);
    printf(" pointer p stores address = %p\n", (void*)&a);
    printf("values assessed using *p = %p\n", *p);

}