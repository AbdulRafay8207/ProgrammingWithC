#include <stdio.h>

int main(){
    int i = 32;
    int* k = &i;
    int** j = &k;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *(&i)); // Writing this i or this *(&i) works same
    printf("The address of i is %u\n", &i);
    printf("The value of k is %d\n", k); // It shows the address of i. Format specifier u and d shows the result same.
    printf("The address of k is %u\n", &k); // Now this shows the address of k and against the address of k, address of i is save.
    printf("The value of the address that is save against the k is %d\n", *k); // Now *k means, give the value of the address that is save against the k. So if we do *i, it will give error. Because i is not a pointer
    printf("The value of k%d\n", *(&k)); // It gives the value of k which is address of i
    printf("The value of the address that is save against the k is  %d\n", **(&k)); // Using double ** will gives the value of i. becuase single * gives the value of k which is address of i, then double ** will give the value of address i which is 2
    printf("The value of j is %d\n", j); // j is double pointer, and this line gives the value of j which is address of k
    printf("The value of *j is %d\n", *j); // This gives the value of address that is save against j. Means against j, address of k is saved, so it will give value of k, which is address of i
    printf("The value of **j is %d\n", **j); // double ** gives the value of i. First agaisnt j address of k, then address of k's value is address of i, then it go for address of i's value which is 32
    printf("The address of j is %d\n", &j); // Addres of j
    printf("The value of **(&j) is %d\n", **(&j)); // It gives address of i
    printf("The value of ***(&j) is %d\n",***(&j)); // it gives value of i


    return 0;
}