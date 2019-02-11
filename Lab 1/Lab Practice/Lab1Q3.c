#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, counter=0, number, smallest=2147483647;

    printf("Please input a positive integer n:\n");
    scanf("%d", &n);

    while(n<=0){
        printf("The number that was input is not positive, please try again:\n");
        scanf("%d", &n);
    }

    for(counter=0; counter<n; counter++){
        printf("Please input a number:\n");
        scanf("%d", &number);

        if(number<smallest){
            smallest = number;
        }
    }
    printf("The smallest number is %d", smallest);
    return 0;
}
