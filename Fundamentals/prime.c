#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int num) {
    if (num<=1)
    return false;

    for ( int i = 2; i <=sqrt(num); i++)
    {
        if (num % i == 0)    
    
        return false;

    }

        return true;

     }

     int main(){
        int number;

        printf("enter a number :");
        scanf("%d", &number);
    
        if (isprime(number))
        printf("%d is a prime number.\n", number);
        
        else

        printf("%d is not a prime number.\n", number);

        return 0;
    }