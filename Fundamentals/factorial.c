#include <stdio.h>

//recursive function to find a factorial//
int factorial(int n){
    if (n==0||n==1)   //base case//  //it checks here if its noe 0 or 1 it goes to recursive call//
    return 1;

    else
        return n*factorial(n-1); //recursice call//
}

int main(){
    int num;
    printf("enter a positive integer :"); //getting input//
    scanf("%d", &num);

    if (num<0) //checking for negative integers input//
    printf("factorials cannot be performed for negative integers,\n ");

    else
    printf("The factorial of %d is %d\n",num,factorial(num)); //printing the output//

    return 0;

}