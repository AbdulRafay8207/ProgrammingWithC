#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if(marks <= 100 && marks >= 90){
        grade = 'A';
        printf("Your grade is %c", grade);
    } else if (marks >= 80) {
        grade = 'B';
        printf("Your grade is %c", grade);
    } else if (marks >= 70) {
        grade = 'C';
        printf("Your grade is %c", grade);
    } else {
        printf("Fail");
    }
    return 0;
}