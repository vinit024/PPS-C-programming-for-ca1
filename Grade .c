// Name:Vinit Sontakke PRN:24030331378024
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) 
{
       printf("Invalid\n");
    } else if (marks >= 90)
 {
       printf("Grade: Excellent\n");
    } else if (marks >= 80) 
{
       printf("Grade: A\n");
    } else if (marks >= 70)
 {
        printf("Grade: B\n");
    } else if (marks >= 60)
 {
        printf("Grade: C\n");
    } else if (marks >= 50)
 {
        printf("Grade: D\n");
    } else if (marks >= 40)
 {
        printf("Grade: E\n");
    } else 
{
        printf("Grade: Fail\n");
    }

    return 0;
}