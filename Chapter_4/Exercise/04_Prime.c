#include <stdio.h>

int main() {
  int num, prime = 0;
  printf("Enter digit to know is it prime or not: ");
  scanf("%d", &num);
  if (num == 1 || num == 0) {
    prime = 1;
  } else {
    // for (int i = 2; i < num; i++) {
    //   if (num % i == 0 && num != 2) {
    //     prime = 1;
    //     break;
    //   }
    // }
    
    // Using Do-While loop
    // int i = 2;    
    // do {
    // if(num%i == 0 && num!=2){
    //     prime = 1;
    //     break;
    // }
    // i++;
    // }while (i<num);
    
    // Using While loop
    int i = 2;
    while (i<num) {
        if(num%i == 0 && num !=2){
            prime = 1;
            break;
        }
        i++;
    }
    
  }
    if (prime) {
      printf("%d is not Prime number", num);
    } else {
      printf("%d is Prime number", num);
    }

  return 0;
}
