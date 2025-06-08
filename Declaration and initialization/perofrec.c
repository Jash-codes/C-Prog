//Concepts used//
//Variable declaration and initialization//
//const keyword//
//Simple arithmetic//

#include<stdio.h>

int main(){
    const int LENGTH = 10; //value//
    const int BREADTH = 5; //value//

    int area, perimeter; //variable declaration in a one line//
    
    area = LENGTH * BREADTH ;

    perimeter = 2 * (LENGTH + BREADTH);

    printf("Length = %d, Breadth = %d", LENGTH,BREADTH);
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}