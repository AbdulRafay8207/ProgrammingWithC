#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter 4 digits: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    if(a>b && a>c && a>d){
        printf("The greatest of all value is %d", a);
    }else if(b>a && b>c && b>d){
        printf("The greatest of all value is %d", b);
    }else if(c>b && c>a && c>d){
        printf("The greatest of all value is %d", c);
    }else if(d>b && d>c && d>a){
        printf("The greatest of all value is %d", d);
    } else{
        printf("Something wrong");
    }
    
    return 0;
}