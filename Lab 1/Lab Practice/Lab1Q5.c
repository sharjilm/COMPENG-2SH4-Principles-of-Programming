#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;
    printf("Please input a student's average:\n");
    scanf("%f", &grade);

    switch(grade)
    {
        case >=90&&<=100:
            prinf("4\n");
            break;
        case >=80&&<=89:
            prinf("3\n");
            break;
        case >=70&&<=79:
            prinf("2\n");
            break;
        case >=60&&<=69:
            prinf("1\n");
            break;
        case >=0&&<=59:
            prinf("0\n");
            break;
        default:
            printf("Invalid input");
    }
}
