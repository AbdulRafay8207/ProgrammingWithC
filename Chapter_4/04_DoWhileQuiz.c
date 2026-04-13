#include <stdio.h>

int main(){
    int n, i=1;
    printf("Enter digit to print till that digut: ");
    scanf("%d",&n);

    do {
        printf("The value of i is %d\n",i);
        i++;
    }while (i<=n);

    return 0;
}
