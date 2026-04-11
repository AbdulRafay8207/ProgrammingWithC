#include <stdio.h>

int main(){
    int subject1;
    int subject2;
    int subject3;
    
    printf("Enter marks of subject1\n");
    scanf("%d", &subject1);
    
    printf("Enter marks of subject2\n");
    scanf("%d", &subject2);
    
    printf("Enter marks of subject3\n");
    scanf("%d", &subject3);
    
    if(subject1 < 33 || subject2 < 33 || subject3 < 33){
        printf("You failed to pass, because you have low marks in any subject");
    } else if((subject1 + subject2 + subject3)/3 < 40){
        printf("You failed due to less percentage");
    } else{
        printf("You passed!");
    }
    
    return 0;
}