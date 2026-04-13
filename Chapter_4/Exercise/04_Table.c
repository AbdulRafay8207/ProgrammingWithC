#include <stdio.h>

int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);

    for (int i=1; i<=10; i++) {
        printf("3 * %d = %d",i,n*i);
    }

    return 0;
}
