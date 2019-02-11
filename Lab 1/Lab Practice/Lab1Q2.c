#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Please input a positive integer:");
    scanf("%d", &x);

    while(x<=0){
        printf("The number that was input is not positive, please try again:");
        scanf("%d", &x);
    }

    printf("The number that you have inputted is %d", x);
    return 0;
}
