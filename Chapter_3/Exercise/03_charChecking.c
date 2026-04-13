#include <stdio.h>

int main(){
    char val;

    printf("Enter a any character: ");
    scanf("%c", &val);

    if(val >= 97 && val <= 122){
        printf("The character is lowercase");
    } else{
        printf("The character is not lowercase");
    }

    return 0;
}
