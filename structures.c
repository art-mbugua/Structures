#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    char course[20];
    char hometown[50];
    char registration[20];
};

int main()
{

    struct student students[5];

    printf("---------Students Registration---------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter reg number: ");
        scanf("%s", students[i].registration);
        printf("Enter courseName: ");
        scanf("%s", students[i].course);
        printf("Enter homeTown: ");
        scanf("%s", students[i].hometown);
        printf("---------Next Student Details---------------\n");
    }

    printf("---------Displaying Information---------------\n");
    for (int i = 0; i < 6; i++)
    {
        printf(" %s of reg number %s is doing %s and the HomeTown is %s \n", students[i].name, students[i].registration, students[i].course, students[i].hometown);
    }
}