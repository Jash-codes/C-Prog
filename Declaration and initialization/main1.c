#include<stdio.h>

// Extern variable declared here, defined in another file (data.c)
extern int sharedvalue;

void usestatic();
void usepointer();

int main(){
    const int maxlimit = 50;

    printf("1. Const value : maxlimit = %d\n", maxlimit);

    printf("2. Extern variable from another file : sharedvalue = %d\n, sharedvalue");

    printf("3. Static function demonstration:\n");

    usestatic();
    usestatic();
    usestatic();
    usestatic();

    printf("4.pointer usage:\n");

    usepointer();

    return 0;



}