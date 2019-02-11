#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Method 1: For loop
    /*
    int sum = 0, i;
    for(i = 30; i <= 1000; i++){
        if(i % 4 ==0){
            sum = sum + i;
        }
    }
    printf("The sum is %d\n", sum);
    return 0;
    */

    // Method 2: While loop
    /*
    int i = 30, sum = 0;
    while(i <= 1000){
        if(i % 4 == 0){
            sum = sum + i;
        }
        i++;
    }
    printf("The sum is %d\n", sum);
    return 0;
    */

    // Method 3: Do-While Loop
    int i = 30, sum = 0;
    do{
        if(i % 4 == 0){
            sum = sum + i;
        }
        i++;
    }
    while(i <= 1000);

    printf("The sum is %d\n", sum);
    return 0;
}
