#include <stdio.h>

int main() {
    int day;
    printf("enter day(1-7) : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1 : printf("monday \n");
        break;
    case 2 : printf("tuesday \n");
        break;
    case 3 : printf("wednesday \n");
        break;
    case 4 : printf("thursday \n");
        break;
    case 5 : printf("friday \n");
        break;
    case 6 : printf("saturday \n");
        break;
    case 7 : printf("sunday \n");
        break;
    default: printf("not a valid day! \n");
        break;
    }




    int number;
    printf("enter number :");
    scanf("%d", &number);

    if (number >= 0) {
        printf("positive \n");
        if(number % 2 == 0) {
            printf("even \n");
        } else {
            printf("odd \n");
        }
    } else {
        printf("Negetive \n");
        if (number % 2 == 0) {
            printf("even \n");
    } else {
        printf("odd \n");
    }
    }











    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);
    if (marks >= 0 && marks < 30 ) {
        printf("C \n");
    } else if ( marks >= 0 && marks >= 30 && marks < 70) {
        printf("B");
    } else if (marks >= 0 && marks >= 70 && marks < 90 ) {
        printf("A");
    } else if (marks >= 0 && marks >= 90 && marks <= 100) {
        printf("A+");
    } else {
        printf("Wrong Input!!");
    }
    return 0;
}