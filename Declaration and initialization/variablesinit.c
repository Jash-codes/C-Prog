#include<stdio.h>

int global = 100;

void display(){
    static int count = 0;
    count++;
    printf("Display called %d times\n", count);

}

int main(){
    int local = 50;

    printf("Global : %d\n", global); //accessing the global variable//
    printf("Local : %d\n", local);

    //Function call to show static behaviour//
    display();
    display();
    display();
    display();
    display();

    return 0;
}