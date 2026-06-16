#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void reverseArray(int a[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printArray(arr, 7);
    reverseArray(arr, 7);
    printArray(arr, 7);
    return 0;
}