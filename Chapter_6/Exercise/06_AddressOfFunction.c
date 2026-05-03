#include <stdio.h>

int* sum(int*a, int*b){
    int s = *a + *b;
    int* pts = &s;
    printf("The sum is %d\n",s);
    return pts;
}

float* avg(int*a, int*b){
    float ave = (*a + *b)/2.0;
    float* pta = &ave;
    printf("The average is %f\n", ave);
    return pta;
}

int main(){
    int x = 2;
    int y = 6;
    int* pts;
    float* pta;
    printf("The value of x %d is and y is %d", x,y);
    pts = sum(&x, &y);
    pta = avg(&x, &y);
    printf("The address of sum is %u and address of avg is %u\n",pts, pta);

    return 0;
}